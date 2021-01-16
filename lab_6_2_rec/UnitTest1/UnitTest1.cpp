#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_2_rec/lab_6_2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSize)
		{
			int S = 0;
			int High = 20, Low = 1;
			int const h = 5;
			int b[h];
			Create(b, h, Low, High, 0);
			int x = sizeof(b) / sizeof(b[0]); // провірка кількості елементів
			Assert::AreEqual(x, h); // провірка чи кількість елементів відповідає заданій 
		
		}
		TEST_METHOD(TestRangeHigh) 
		{
			int S = 0;
			int High = 20, Low = 1;
			int const h = 5;
			int b[h];
			Create(b, h, Low, High, 0);
			for (int i = 0; i < h; i++) {
				Assert::IsTrue(b[i] < High); // Перевірка на виступання за верхню границю
			}
		}
		TEST_METHOD(TestRangeLow) {
			int S = 0;
			int High = 20, Low = 1;
			int const h = 5;
			int b[h];
			Create(b, h, Low, High, 0);
			for (int i = 0; i < h; i++) {
				Assert::IsTrue(b[i] > Low); // Перевірка на виступання за нижню границю
			}
		}
	};
}
