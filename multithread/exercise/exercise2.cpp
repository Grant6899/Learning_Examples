/*************************************************************************
	> File Name: exercise1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Dec  4 22:13:16 2017
 ************************************************************************/

#include <boost/date_time/posix_time/posix_time.hpp> 
#include <boost/cstdint.hpp> 
#include <iostream> 
#include <boost/thread.hpp>
#include <vector>

void partial_sum(int st, int ed, boost::uint64_t& total){
    for (int i = st; i < ed; ++i)
        total += i;
}

int main() 
{ 
    int max_thread_num = boost::thread::hardware_concurrency();
    std::vector<boost::thread> vec_t;
    std::vector<boost::uint64_t> vec_sum(max_thread_num, 0);
    int gap = 1000000000 / max_thread_num;

    boost::posix_time::ptime start = boost::posix_time::microsec_clock::local_time(); 
    
    for( int i = 0, last_st = 0; i<max_thread_num; ++i, last_st += gap )
        vec_t.push_back(boost::thread(partial_sum, last_st, last_st+gap, boost::ref(vec_sum[i])));
    
    
    for (int i=0; i<max_thread_num; ++i)
        vec_t[i].join();
    

    boost::uint64_t sum = 0;
    for (int i=0; i<max_thread_num; ++i)
        sum += vec_sum[i];

    boost::posix_time::ptime end = boost::posix_time::microsec_clock::local_time(); 
    std::cout << "Multi-thread execution time:" << end - start << std::endl; 

    std::cout << "Multi-thread execution result:" << sum << std::endl; 
   
} 
