/*************************************************************************
> File Name: test.cpp
> Author: Grant Liu
> Mail: ymliu6899@gmail.com
> Created Time: Sun Dec 10 11:57:31 2017
************************************************************************/

#include<iostream>
#include"Rational.h"

using namespace std;

int main() {

	Rational r0;
	Rational r1(2, 5);
	Rational r2 = -r1;
	Rational r3 = 2.34;
	Rational r4 = 0.4;
    Rational r5 = 15;
    Rational r6(5, 8);

	// Ctor test
	cout << "ctor test:\n";
	cout << "r0: " << r0 << endl;
	cout << "r1: " << r1 <<endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl;
	cout << "r4: " << r4 << endl;
    cout << "r5: " << r5 << endl;

	// logical operator test
	cout << "logical operator test:\n";
	cout << boolalpha << "r0 > r1: " << (r0 > r1) << endl;
	cout << "-1 <= r2: " << (-1 <= r2) << endl;
    cout << "r2 != r4: " << (r1 != r4) << endl;
    cout << "r1 * r3 >= r2 + r4: " << (r1 * r3 >= r2 + r4) << endl;

	// arithmetic test
	cout << "arithmetic test:\n";
	cout << "r0 + r1: " << (r0 + r1) << endl;
	cout << "-1 - r2: " << (-1 - r2) << endl;
    cout << "r4 * r2: " << (r4 * r2) << endl;
    cout << "3 / r1: " << (3 / r1) << endl;

    // lvalue & rvalue test
    Rational* rp = new Rational(3, 8);
    Rational& refp = r1;
    
    cout << "*rp: " << *rp << endl;
    cout << "refp: " << refp << endl;

    // const object return test
    r1 * r2 = r3;
    
    // Explicit type conversion
    cout << "Type conversion test:\n";
    auto d6 = static_cast<double>(r6);
    cout << d6 << endl;

	return 0;
}
