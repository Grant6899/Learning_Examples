/*************************************************************************
	> File Name: ex4.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 20:47:47 2017
 ************************************************************************/

#include<iostream>
#include"pe.h"

using namespace std;

int main(){
    
    double ar[4] = {1.0, 2.0, 3.0, 4.0};
    
    SALES::Sales s1;
    SALES::setSales(s1, ar, 4);
    SALES::showSales(s1);

    return 0;
}
