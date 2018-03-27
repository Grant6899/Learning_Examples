/*************************************************************************
	> File Name: mutextest.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Mon Mar 26 20:42:17 2018
 ************************************************************************/

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex gMutex;

void OutputValue( int n )
{
  gMutex.lock();
  cout << "Number:";
  for( int i = 0; i < n; ++ i )
  {
    this_thread::sleep_for( chrono::duration<int, std::milli>( 5 ) );
    cout << " " << i;
  }
  cout << endl;
  gMutex.unlock();
}

int main( int argc, char** argv )
{
  thread mThread1( OutputValue, 3 );
  thread mThread2( OutputValue, 4 );
  mThread1.join();
  mThread2.join();

  return 0;
}
