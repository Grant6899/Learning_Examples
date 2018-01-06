/*************************************************************************
	> File Name: forktest1.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Wed Jan  3 17:30:13 2018
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main() {
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}
