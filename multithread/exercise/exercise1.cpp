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

void partial_sum(int st, int ed, boost::uint64_t& total){
    for (int i = st; i < ed; ++i)
        total += i;
}

int main() 
{ 
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::local_time(); 

  boost::uint64_t sum = 0; 
  for (int i = 0; i < 1000000000; ++i) 
    sum += i; 

  boost::posix_time::ptime end = boost::posix_time::microsec_clock::local_time(); 
  std::cout << "Single thread execution time:" << end - start << std::endl; 

  std::cout << "Single thread execution result:" << sum << std::endl; 
  
  start = boost::posix_time::microsec_clock::local_time(); 

  boost::uint64_t sum_1 = 0;
  boost::uint64_t sum_2 = 0;
  boost::thread t1(partial_sum, 0, 500000000, sum_1);
  boost::thread t2(partial_sum, 500000000, 1000000000, sum_2);
  boost::uint64_t sum_12 = sum_1 + sum_2;

  end = boost::posix_time::microsec_clock::local_time(); 
  std::cout << "Multi-thread execution time:" << end - start << std::endl; 

  std::cout << "Multi-thread execution result:" << sum_12 << std::endl; 
   

} 
