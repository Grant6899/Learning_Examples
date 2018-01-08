/*************************************************************************
	> File Name: ex2-27.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Jan  6 15:36:38 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    { 
        // int i = -1, &r = 0; // illegal. non-const reference cannot bind to literal
    }
    
    {
        int i2 = 0;
        int * const p2 = &i2; // legal. p2 is a const pointer to integer.
    }
    
    {
        const int i = -1, &r = 0; // legal. const int reference can bind to literal
    }
    
    {
        int i2 = 1;
        const int *const p3 = &i2; // legal. p3 is a const pointer that points to a const int
    }

    {
        int i2 = 2;
        const int *p1 = &i2; // legal. p1 is a pointer that points to const integer
    }

    {
        // const int &const r2;// Error: 1. there is not top-level const for reference
                               //        2. a const reference must be initialized when defined 
    }

    {
        int i = 0;
        const int i2 = i, &r = i; // legal.
    }
    //
    //
    return 0;
}
