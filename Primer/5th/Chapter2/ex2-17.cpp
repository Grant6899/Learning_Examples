/*************************************************************************
	> File Name: ex2-17.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Fri Jan  5 21:37:36 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i, &ri = i; // ri is reference to i
    i = 5; ri = 10; // change ri will change i as well
    cout << i << " " << ri << endl; // 10 10
    return 0;
}
