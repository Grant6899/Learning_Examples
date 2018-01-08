/*************************************************************************
	> File Name: ex2-31.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Jan  6 22:19:02 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i;
    const int v2 = 0;  // v2 has top-level const
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    
    r1 = v2; // OK
    //p1 = p2; // Error. p2 has low-level const, cannot be assigned to non-const pointer
    p2 = p1; // OK.But why?
    //p1 = p3; // Error. low-level const mismatch.
    p2 = p3; // OK. 

    //int &r = v2; //Error. v2 has low-level const
    // The assignment can add but not lose the low-level `const` qualifier.
    // The assignment will ignore top-level `const` qualifier.
    return 0;
}
