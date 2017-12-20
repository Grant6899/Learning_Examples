/*************************************************************************
> File Name: Rational.h
> Author: Grant Liu
> Mail: ymliu6899@gmail.com
> Created Time: Sat Dec  9 23:14:28 2017
************************************************************************/

#ifndef _RATIONAL_H
#define _RATIONAL_H

#include<iostream>

using namespace std;

class Rational {
private:
	int p_, q_;
	void Standardize();
	int gcd(int m, int n);

public:
	Rational(int p = 0, int q = 1) : p_(p), q_(q) {
		Standardize();
	};

	Rational(const Rational &r) : p_(r.p_), q_(r.q_) {
		Standardize();
	};

	Rational(double ra);

	virtual ~Rational() = default;
	void Reduce();

	int GetNumerator() const {
		return p_;
	}

	int GetDenominator() const {
		return q_;
	}

	Rational& operator=(const Rational& rhs);
	Rational& operator=(double rhs);

	// overloading -
	Rational operator-() {
		Rational temp(-p_, q_);
		return temp;
	}

	
	// Convert a rational to double explicitly
    explicit operator double(){
        return p_ / ((double) q_);
    };

	friend ostream& operator<<(ostream &os, Rational & obj);
	friend ostream& operator<<(ostream &os, Rational && obj);

};


// overloading binary operators
int operator==(const Rational& lhs, const Rational& rhs);

int operator!=(const Rational& lhs, const Rational& rhs);

int operator>(const Rational& lhs, const Rational& rhs);

int operator>=(const Rational& lhs, const Rational& rhs);

int operator<(const Rational& lhs, const Rational& rhs);

int operator<=(const Rational& lhs, const Rational& rhs);

Rational operator+(const Rational& lhs, const Rational& rhs);

Rational operator-(const Rational& lhs, const Rational& rhs);

Rational operator*(const Rational& lhs, const Rational& rhs);

Rational operator/(const Rational& lhs, const Rational& rhs);

#endif
