/*************************************************************************
	> File Name: forktest.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Wed Jan  3 17:00:38 2018
 ************************************************************************/

#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdio.h>
using namespace std;

void print_exit(){
    printf("the exit pid:%d\n", getpid());
}

int main(){
    pid_t pid;
    atexit( print_exit );
    pid = fork();
    if(pid < 0)
        printf("error in fork!");
    else if (pid == 0)
        printf("I am the child process, my process id is %d\n", getpid());
    else{
        printf("I am the parent process, my process id is %d\n", getpid());
        sleep(2);
        //wait();
    }
    return 0;
}
