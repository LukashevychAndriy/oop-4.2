#pragma once
#include "Equation.h";
#include <iostream>

using namespace std;

class QuadraticEquation : public Equation
{
private:
	double a, b, c;
public:
	QuadraticEquation(double a, double b, double c) {
		while (a < 0) {
			cout << "¬вед≥ть значенн€ коеф≥ц≥Їнта а" << endl;
			cin >> a;
		}
		setA(a);
		setB(b);
		setC(c);
	}

	double getA() const { return a; }
	double getB() const { return b; }
	double getC() const { return c; }
	void setA(double num) { a = num; }
	void setB(double num) { b = num; }
	void setC(double num) { c = num; }

	virtual string getEquationRoot() const;
};
