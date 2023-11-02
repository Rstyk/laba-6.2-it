#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2 it/lab 6.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba62it
{
	TEST_CLASS(laba62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Serednie(b, 5, 0, 0);
			Assert::AreEqual(2, result);

		}
	};
}
