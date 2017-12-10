/*************************************************************************
	> File Name: pe9-4.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 20:05:36 2017
 ************************************************************************/

#include<iostream>
#include<climits>
#include"pe.h"

using namespace std;

void SALES::setSales(SALES::Sales & s, const double ar[], int n){
    s.average = 0;
    s.max = INT_MIN;
    s.min = INT_MAX;
    int len = n > SALES::QUARTERS? SALES::QUARTERS : n;

    for (int i = 0; i < len; ++i){
        s.sales[i] = ar[i];
        s.average += ar[i];
        s.max = ar[i] > s.max? ar[i] : s.max;
        s.min = ar[i] < s.min? ar[i] : s.min;
    }
    s.average /= len;
}

void SALES::setSales(SALES::Sales & s){
    double input;
    std::cout << "Enter a sales number:\n";
    std::cin >> input;
    int num = 0;

    s.average = 0;
    s.max = INT_MIN;
    s.min = INT_MAX;
    while (cin && num < 3)
    {
        s.sales[num] = input;
        s.average += s.sales[num];
        s.max = s.sales[num] > s.max? s.sales[num] : s.max;
        s.min = s.sales[num] < s.min? s.sales[num] : s.min;
        ++num;
        cout << "Enter next sales number (empty line to quit):\n";
        cin.clear();
        std::cin >> input;
    }
    s.average /= (num + 1);
    cout << "Bye\n";
}

void showSales(const SALES::Sales & s){
    std::cout << "Sales:\n";
    for (int i = 0; i < SALES::QUARTERS; ++i){
        std::cout << "Quater "<<i<<" $"<<s.sales[i]<<std::endl;
    }
    std::cout<<"Average: "<<s.average<<std::endl;
    std::cout<<"Max: "<<s.max<<std::endl;
    std::cout<<"Min: "<<s.min<<std::endl;
    
} 




