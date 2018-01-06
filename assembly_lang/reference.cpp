/*************************************************************************
	> File Name: reference.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sun Dec 17 23:58:21 2017
 ************************************************************************/

#include<stdio.h>  
#include<iostream>
using namespace std;
  
int main()  
{  
         int  iVal = 25;  
  
         int* pInt = &iVal;  
         int& iRef = iVal;  
         printf("*pInt = %d, iRef = %d/n", *pInt, iRef);  
  
         return 0;  
}
