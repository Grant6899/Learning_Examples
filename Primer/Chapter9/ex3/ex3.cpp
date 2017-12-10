/*************************************************************************
	> File Name: ex3.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 18:57:20 2017
 ************************************************************************/

#include<iostream>
#include<new>
#include<cstring>

struct chaff{
    char dross[20];
    int slag;
};

char buffer[500];

int main(){
    chaff *p1;
    int i;
    
    p1 = new(buffer) chaff[2];
    std::strcpy(p1[0].dross, "Horse Feathers");
    p1[0].slag = 13;
    std::strcpy(p1[1].dross, "Piffle");
    p1[1].slag = -39;

    return 0;
}



