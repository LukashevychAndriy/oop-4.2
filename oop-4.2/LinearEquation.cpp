#include "LinearEquation.h"
#include <string>

using namespace std;

string LinearEquation::getEquationRoot() const {
	double a = getA();
	double b = getB();

	if (a == 0 && b == 0) {
		return "����� ������";
	}
	else if (a == 0 && b != 0) {
		return "������ ����";
	}
	else {
		double root = -b / a;
		return to_string(root);
	}
}
