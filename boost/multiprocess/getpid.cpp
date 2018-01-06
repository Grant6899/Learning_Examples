/*************************************************************************
	> File Name: getpid.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Wed Jan  3 16:53:32 2018
 ************************************************************************/
#include<unistd.h>
#include<iostream>
using namespace std;

int main(){
    printf("pid is %d\n", getpid());
    return 0;
}
