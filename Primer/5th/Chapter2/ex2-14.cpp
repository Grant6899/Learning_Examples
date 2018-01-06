/*************************************************************************
	> File Name: ex2-14.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Thu Jan  4 22:16:37 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
}
