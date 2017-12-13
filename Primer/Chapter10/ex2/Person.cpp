/*************************************************************************
	> File Name: Person.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Dec 10 19:03:07 2017
 ************************************************************************/

#include<iostream>
#include<cstring>
#include"Person.h"
using namespace std;

Person::Person(const string & ln, const char * fn){
    lname = ln;
    std::strcpy(fname, fn);
}

void Person::Show() const{
    cout << fname;
    cout<<", "<<lname;
}

void Person::FormalShow() const{
    cout<<lname<<", ";
    cout << fname;
}
    

