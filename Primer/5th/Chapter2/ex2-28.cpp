/*************************************************************************
	> File Name: ex2-28.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Jan  6 15:52:21 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    {
        //int i, * const cp; //illegal. const pointer must be initialized.
    }
    {
        //int * pi, *const p2; //illegal. const pointer must be initialized.
    }
    {
        //const int ic, &r = ic; // illegal. const int must be initialized.
    }
    {
        //const int *const p3; //illegal. const pointer must be initialized.
    }
    {
        int i = 1;
        const int i2 = i, &r = i; // OK
    }
    return 0;
}
