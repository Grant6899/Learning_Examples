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

	// Ctor test
	cout << "ctor test:\n";
	cout << "r0: " << r0 << endl;
	cout << "r1: " << r1 <<endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl;
	cout << "r4: " << r4 << endl;

	// logical operator test
	cout << "logical operator test:\n";
	cout << boolalpha << "r0 > r1: " << (r0 > r1) << endl;
	cout << "-1 <= r2: " << (-1 <= r2) << endl;
	cout << "r2 != r4 " << (r1 != r4) << endl;
	cout << "r0 == 0 " << (r0 == 0) << endl;

	// arithmetic test
	cout << "arithmetic test:\n";
	cout << "r0 + r1: " << (r0 + r1) << endl;
	//cout << "-1 - r2: " << (-1 - r2) << endl;
	//cout << "r2 * r4 " << (r2 * r4) << endl;
	//cout << "3 / r1 " << (3 / r1) << endl;
	return 0;
}
