/*************************************************************************
	> File Name: ex2-35.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Jan  7 16:33:09 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    const int i = 42; 
    auto j = i; // j is int
    const auto &k = i; // k is const int reference
    auto *p = &i; // p is const int *
    const auto j2 = i, &k2 = i; // j2 is const int, k2 is const int reference
    return 0;
}
