/*************************************************************************
	> File Name: test.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Dec 10 19:17:17 2017
 ************************************************************************/

#include<iostream>
#include"Person.h"
using namespace std;

int main(){
    
    Person p1("Liu", "Grant");

    p1.Show();
    std::cout << std::endl;
    p1.FormalShow();
    std::cout << std::endl;

    Person one;                       // use default constructor
    Person two("Smythecraft");        // use #2 with one default argument
    Person three("Dimwiddy", "Sam");  // use #2, no defaults
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    return 0;
}
