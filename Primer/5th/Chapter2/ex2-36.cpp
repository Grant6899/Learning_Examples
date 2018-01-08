/*************************************************************************
	> File Name: ex2-36.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Jan  7 16:57:10 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int a = 3, b = 4;
    decltype(a) c = a; // c is int
    decltype((b)) d = a; // d is int& of a
    ++c;
    ++d;
    cout << "a: " << a << endl; // 4
    cout << "b: " << b << endl; // 4
    cout << "c: " << c << endl; // 4
    cout << "d: " << d << endl; // 4

    return 0;
}
