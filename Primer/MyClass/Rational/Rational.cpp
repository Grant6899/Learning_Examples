/*************************************************************************
> File Name: Rational.cpp
> Author: Grant Liu
> Mail: ymliu6899@gmail.com
> Created Time: Sat Dec  9 23:10:19 2017
************************************************************************/

#include<iostream>
#include<numeric>
#include"Rational.h"

using namespace std;

void Rational::Standardize() {
	if (q_ == 0) {
		cout << "Error: Denominator cannot be zero!\n";
		exit(1);
	}
	else if (q_<0) {
		p_ = -p_;
		q_ = -q_;
	}
}

int Rational::gcd(int m, int n) {
	int i, t;
	if (m == 0 || n == 0) {
		cout << "Error: m and n cannot be zero!\n";
		exit(1);
	}

	if (n > m || n<-m) {
		t = n;
		n = m;
		m = t;
	}
	i = m % n;
	if (i != 0)
		do {
			m = n;
			n = i;
			i = m % n;
		} while (m % n != 0);

		return ((n>0) ? n : -n);
}

Rational::Rational(double ra) {
	int base = 1;
	while (ra - (int)ra != 0) {
		ra *= 10;
		base *= 10;
	}
	p_ = ra;
	q_ = base;
}

void Rational::Reduce() {
	if (p_ == 0)
		return;
	int didr = gcd(p_, q_);
	p_ /= didr;
	q_ /= didr;
}

Rational& Rational::operator=(const Rational& rhs) {
	p_ = rhs.p_;
	q_ = rhs.q_;
	return *this;
}

Rational& Rational::operator=(double rhs) {
	Rational temp(rhs);
	// Make this point to temp, otherwise temp will get destructed automatically.
	*this = temp;
	return *this;
}

double Float(Rational &r) {
	return r.p_ / (double)r.q_;
}

ostream& operator<<(ostream &os, Rational &obj) {
	obj.Reduce();
	os << obj.GetNumerator() << "/" << obj.GetDenominator();
	return os;
}

int operator==(double ra, Rational& rhs) {
	return (rhs == ra);
};

int operator!=(double ra, Rational& rhs) {
	return !(rhs == ra);
};

int operator>(double ra, Rational& rhs) {
	Rational temp(ra);
	return (ra > rhs);
};

int operator>=(double ra, Rational& rhs) {
	return (ra == rhs || ra > rhs);
};

int operator<(double ra, Rational& rhs) {
	Rational temp(ra);
	return (temp < rhs);
};

int operator<=(double ra, Rational& rhs) {
	return (ra == rhs || ra < rhs);
};

Rational operator+(double ra, Rational rhs) {
	return (ra + rhs);
}

Rational operator-(double ra, Rational rhs) {
	Rational temp(ra);
	return (temp - rhs);
}

Rational operator*(double ra, Rational rhs) {
	return (ra * rhs);
}

 Rational operator/(double ra, Rational rhs) {
	Rational temp(ra);
	return (temp / rhs);
}