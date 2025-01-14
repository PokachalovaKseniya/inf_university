#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Ксения\Desktop\уник\информатика\проекты\дз1\дз1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		float x = 1 ;
		float y = 3;
		float PI = 3.141592653589793;

		float R = R = 1 / tan(PI * x / y);
		float S = pow(x + log(1 / x), 1 / 3);

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(R, 0.0f);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(S, 0.0f);
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::IsTrue(R>S);
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::IsTrue(S>R);
		}

		TEST_METHOD(TestMethod5)
		{
			Assert::IsTrue(R>0);
		}

		TEST_METHOD(TestMethod6)
		{
			Assert::IsTrue(S>0);
		}
	};
}
