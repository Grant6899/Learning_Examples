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

	// overloading ==
	int operator==(const Rational& rhs) const {
		return (p_ * rhs.GetDenominator() == q_ * rhs.GetNumerator());
	}

	int operator==(double ra) const {
		Rational temp(ra);
		return operator==(temp);
	}

	// overloading !=
	int operator!=(const Rational& rhs) const {
		return !operator==(rhs);
	}

	int operator!=(double ra) const {
		Rational temp(ra);
		return !operator==(temp);
	}

	// overloading >
	int operator>(const Rational& rhs) const {
		return (p_ * rhs.GetDenominator() > q_ * rhs.GetNumerator());
	}

	int operator>(double ra) const {
		Rational temp(ra);
		return operator>(temp);
	}

	// overloading >=
	int operator>=(const Rational& rhs) {
		return (operator==(rhs) || operator>(rhs));
	}

	int operator>=(double ra) {
		return (operator==(ra) || operator>(ra));
	}

	// overloading <
	int operator<(const Rational& rhs) {
		return (p_ * rhs.GetDenominator() < q_ * rhs.GetNumerator());
	}

	int operator<(double ra) {
		Rational temp(ra);
		return operator<(temp);
	}

	// overloading <=
	int operator<=(const Rational& rhs) {
		return (operator==(rhs) || operator<(rhs));
	}

	int operator<=(double ra) {
		return (operator==(ra) || operator<(ra));
	}

	// overloading +
	Rational operator+(const Rational& rhs) const {
		Rational temp(p_*rhs.GetDenominator() + rhs.GetNumerator() * q_, rhs.GetDenominator() * q_);
		return temp;
	}

	Rational operator+(double ra) const {
		Rational temp(ra);
		return operator+(temp);
	}

	// overloading -
	Rational operator-(const Rational& rhs) const {
		Rational temp(p_*rhs.GetDenominator() - rhs.GetNumerator() * q_, rhs.GetDenominator() * q_);
		return temp;
	}

	Rational operator-(double ra) const {
		Rational temp(ra);
		return operator-(temp);
	}

	// overloading *
	Rational operator*(const Rational& rhs) const {
		Rational temp(p_ * rhs.GetNumerator(), rhs.GetDenominator() * q_);
		return temp;
	}

	Rational operator*(double ra) const {
		Rational temp(ra);
		return operator*(temp);
	}

	// overloading /
	Rational operator/(const Rational& rhs) const {
		if (rhs.GetNumerator() == 0) {
			cout << "Error: Cannot be divided by zero!\n";
			exit(1);
		}
		Rational temp(p_*rhs.GetDenominator(), rhs.GetNumerator() * q_);
		return temp;
	}

	Rational operator/(double ra) const {
		Rational temp(ra);
		return operator/(temp);
	}

	// Convert a rational to double by force
	friend double Float(Rational &r);

	friend ostream& operator<<(ostream &os, Rational & obj);
	friend ostream& operator<<(ostream &os, Rational && obj);

};


// overloading binary operators
int operator==(double ra, Rational& rhs);

int operator!=(double ra, Rational& rhs);

int operator>(double ra, Rational& rhs);

int operator>=(double ra, Rational& rhs);

int operator<(double ra, Rational& rhs);

int operator<=(double ra, Rational& rhs);

Rational operator+(double ra, Rational rhs);

Rational operator-(double ra, Rational rhs);

Rational operator*(double ra, Rational rhs);

Rational operator/(double ra, Rational rhs);

#endif
