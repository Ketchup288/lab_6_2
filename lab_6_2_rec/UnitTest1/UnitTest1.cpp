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
			int x = sizeof(b) / sizeof(b[0]); // ������� ������� ��������
			Assert::AreEqual(x, h); // ������� �� ������� �������� ������� ������ 
		
		}
		TEST_METHOD(TestRangeHigh) 
		{
			int S = 0;
			int High = 20, Low = 1;
			int const h = 5;
			int b[h];
			Create(b, h, Low, High, 0);
			for (int i = 0; i < h; i++) {
				Assert::IsTrue(b[i] < High); // �������� �� ���������� �� ������ �������
			}
		}
		TEST_METHOD(TestRangeLow) {
			int S = 0;
			int High = 20, Low = 1;
			int const h = 5;
			int b[h];
			Create(b, h, Low, High, 0);
			for (int i = 0; i < h; i++) {
				Assert::IsTrue(b[i] > Low); // �������� �� ���������� �� ����� �������
			}
		}
	};
}
