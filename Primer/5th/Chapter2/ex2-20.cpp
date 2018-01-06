/*************************************************************************
	> File Name: ex2-20.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Fri Jan  5 21:50:47 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i = 42;
    int *p1 = &i; // p1 saves address of i
    *p1 = *p1 * *p1; // p1 = 42 * 42i
    cout << *p1 << endl;
    return 0;
}
