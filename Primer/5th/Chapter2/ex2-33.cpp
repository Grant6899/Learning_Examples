/*************************************************************************
	> File Name: ex2-33.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Jan  7 16:16:23 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    
    const auto f = ci;
    auto &g = ci;

    std::cout << "a: before = " << a;
    a = 42; // a is int
    std::cout << "\tafter = " << a << std::endl;

    std::cout << "b: before = " << b;
    b = 42; // b is int
    std::cout << "\tafter = " << b << std::endl;

    std::cout << "c: before = " << b;
    c = 42; // c is int
    std::cout << "\tafter = " << c << std::endl;
    
    
    //d = 42; // Error. d is int*

    //e = 42; // Error. e is const int *
    
    //f = 42; // Error. f is const int, cannot be modified

    //g = 42; // g is const int reference

    return 0;
}
