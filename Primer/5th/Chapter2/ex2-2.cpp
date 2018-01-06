/*************************************************************************
	> File Name: ex2-2.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Thu Jan  4 19:37:24 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    unsigned u = 10, u2 = 42; 
    std::cout << u2 - u << std::endl; 
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; 
    std::cout << i - i2 << std::endl;
    
    std::cout << i - u << std::endl; 
    std::cout << u - i << std::endl;

    return 0;
}
