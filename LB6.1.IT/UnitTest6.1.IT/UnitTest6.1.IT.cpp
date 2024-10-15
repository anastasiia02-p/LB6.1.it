#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.1.IT/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61IT
{
	TEST_CLASS(UnitTest61IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int SIZE = 20;
			int arr[SIZE];
			c = sum(arr, SIZE);
			Assert::AreEqual(c, -16, 0.00001);
		}

		
		
		TEST_METHOD(TestMethod2)
		{
			double q;
			const int SIZE = 25;
			int arr[SIZE];
			q = count(arr, SIZE);
			Assert::AreEqual(q, 25, 0.00001);
		}
	};
}
