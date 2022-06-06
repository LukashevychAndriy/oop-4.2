#include "Equation.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include <iostream>

using namespace std;

int main()
{
	LinearEquation a(1, 2);
	cout << "The root of LinearEquation is : " << a.getEquationRoot() << endl;

	QuadraticEquation b(1, 0, -4);
	cout << "The root of QuadraticEquation is : " << b.getEquationRoot() << endl;

	cout << endl;
	Equation* array[2];

	array[0] = &a;
	cout << "The root of LinearEquation is : " << array[0]->getEquationRoot() << endl;

	array[1] = &b;
	cout << "The root of QuadraticEquation is : " << array[1]->getEquationRoot() << endl;
}
