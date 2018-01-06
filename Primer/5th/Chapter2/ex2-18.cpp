/*************************************************************************
	> File Name: ex2-18.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Fri Jan  5 21:43:17 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i = 10, *pi = &i;
    int *p = 0;
    p = pi; // change value of a pointer
    *pi = 20; // change the value to which pointer points
    return 0;
}
