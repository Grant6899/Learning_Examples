/*************************************************************************
	> File Name: printthread.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Mon Mar 26 19:05:45 2018
 ************************************************************************/

#include<thread>
#include<mutex>
#include<condition_variable>
#include<iostream>

using namespace std;

std::condition_variable cond;
std::mutex print_mutex;
int flag = 0;
 
void print_thread(int num){
    for (int i = 0; i < 10; i++){
        std::unique_lock<std::mutex> lk(print_mutex);
        cond.wait(lk, [&]() {return num == flag; });
        std::cout << char('A' + num);
        flag = (flag + 1) % 3;
        cond.notify_all();
    }
}
 
int main(){
    std::thread t1(print_thread, 1);
    std::thread t2(print_thread, 2);
    print_thread(0);
    t1.join();
    t2.join();
    cout << endl;
    return 0;
}


