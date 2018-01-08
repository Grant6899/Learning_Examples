/*************************************************************************
	> File Name: ex2-37.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Jan  7 17:00:17 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int a = 3, b = 4;
    decltype(a) c = a; // c is int
    decltype(a = b) d = a; // d is int&
    
    return 0;
}
