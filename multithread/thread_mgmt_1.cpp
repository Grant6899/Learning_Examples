/*************************************************************************
	> File Name: thread_mgmt.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Dec  3 23:10:06 2017
 ************************************************************************/

#include<iostream>
#include <boost/thread.hpp>

using namespace std;

void wait(int seconds)
{
  boost::this_thread::sleep(boost::posix_time::seconds(seconds));
}

void thread()
{
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << std::endl;
  }
}

int main()
{
  boost::thread t(thread);
  t.join();
}
