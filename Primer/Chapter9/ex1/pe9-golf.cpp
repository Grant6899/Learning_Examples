/*************************************************************************
	> File Name: pe9-golf.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 15:34:57 2017
 ************************************************************************/

#include<iostream>
#include "pe9-golf.h"
#include<cstring>

void setgolf(golf & g, const char * name, int hc){
    std::strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    std::cout << "Please enter golfer's full name: ";
    std::cin.getline(g.fullname, Len);
    if (g.fullname[0] == '\0')
        return 0;                // premature termination
    std::cout << "Please enter handicap for " << g.fullname << ": ";
    while (!(std::cin >> g.handicap))
    {
        std::cin.clear();
        while (std::cin.get() !='\n')
            continue;
        std::cout << "Please enter an integer: ";
    }
    while (std::cin.get() != '\n')
        continue;
    return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    std::cout<<"Golf full name:"<<g.fullname<<std::endl;
    std::cout<<"Golf handicap:"<<g.handicap<<std::endl;
}
