#include "QuadraticEquation.h"
#include <string>

using namespace std;

string QuadraticEquation::getEquationRoot() const {
	double a = getA();
	double b = getB();
	double c = getC();

	double D = b * b - 4 * a * c;

	if (D < 0) {
		return "Коренів немає";
	}
	else if (D == 0) {
		double root = -b / 2 * a;
		return to_string(root);
	}
	else {
		double root1 = -b - sqrt(D) / 2 * a;
		double root2 = -b + sqrt(D) / 2 * a;
		return to_string(root1) + " " + to_string(root2);
	}
}
