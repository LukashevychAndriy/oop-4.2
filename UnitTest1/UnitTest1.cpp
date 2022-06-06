#include "pch.h"
#include "CppUnitTest.h"
#include "../oop-4.2/Equation.h"
#include "../oop-4.2/LinearEquation.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Equation* a = new LinearEquation(1, 2);
			double expectedRes = -2;
			Assert::AreEqual(a->getEquationRoot(), to_string(expectedRes));
		}
	};
}
