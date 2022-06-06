#pragma once
#include "Equation.h";

class LinearEquation : public Equation
{
private:
	double a, b;
public:
	LinearEquation(double a, double b) {
		setA(a);
		setB(b);
	}

	double getA() const { return a; }
	double getB() const { return b; }
	void setA(double num) { a = num; }
	void setB(double num) { b = num; }

	virtual string getEquationRoot() const;
};
