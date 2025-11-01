#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_07.1.it/Lab_07.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest19
{
	TEST_CLASS(UnitTest19)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int r = 2, c = 3;
			int** z = new int* [r];
			for (int i = 0; i < r; ++i)
				z[i] = new int[c];

			z[0][0] = 2;  z[0][1] = 3;  z[0][2] = -1;
			z[1][0] = 5;  z[1][1] = 4;  z[1][2] = 7;

			int S = 0, k = 0;
			Calc(z, r, c, S, k);

			Assert::AreEqual(5, S);
			Assert::AreEqual(3, k);

			for (int i = 0; i < r; ++i)
				delete[] z[i];
			delete[] z;
		}
	};
}
