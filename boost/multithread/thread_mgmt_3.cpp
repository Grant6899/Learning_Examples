/*************************************************************************
	> File Name: thread_mgmt_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Dec  4 00:03:39 2017
 ************************************************************************/

#include <boost/thread.hpp> 
#include <iostream> 

int main() 
{ 
  std::cout << boost::this_thread::get_id() << std::endl; 
  std::cout << boost::thread::hardware_concurrency() << std::endl; 
}
