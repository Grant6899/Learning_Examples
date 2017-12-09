/*************************************************************************
	> File Name: concurrency_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Dec  4 00:10:56 2017
 ************************************************************************/

#include <boost/thread.hpp> 
#include <iostream> 

void wait(int seconds) 
{ 
  boost::this_thread::sleep(boost::posix_time::seconds(seconds)); 
} 

boost::mutex mutex; 

void thread() 
{ 
  for (int i = 0; i < 5; ++i) 
  { 
    wait(1); 
    boost::lock_guard<boost::mutex> lock(mutex); 
    std::cout << "Thread " << boost::this_thread::get_id() << ": " << i << std::endl; 
  } 
} 

int main() 
{ 
  boost::thread t1(thread); 
  boost::thread t2(thread); 
  t1.join(); 
  t2.join(); 
} 
