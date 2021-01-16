#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_2_iter/lab_6_2_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m = 8;
			int v[m] = { 2, 14, 37, 28, 17, 29, 19, 32 };
			int o = 17;
			Assert::AreEqual(o, IndexSum(v, m));
		}
	};
}
