/*************************************************************************
	> File Name: ex2-32.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Jan  7 14:57:04 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    // int null = 0, *p = null; // Error. p is an int pointer that cannot be initialized by a zero-value int.
    
    // Method 1
    int null = 0, *p = 0;

    // Method 2
    const int null2 = 0;
    int *p2 = null2;

    // Method 3 doesn't work under gcc
    /* constexpr int null3 = 0;
    int *p3 = null3;
    */
    return 0;
}
