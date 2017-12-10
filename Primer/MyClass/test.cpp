/*************************************************************************
	> File Name: test.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Dec 10 11:57:31 2017
 ************************************************************************/

#include<iostream>
#include"Rational.h"

using namespace std;

int main(){
    
    Rational r1(2,5);
    Rational r2(-r1);
    Rational r3;
    r3 = 2.34;
    
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;

    return 0;
}
