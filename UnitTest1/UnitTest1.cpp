#include "pch.h"
#include "CppUnitTest.h"
#include"../6.3(int)/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1,2,8,4 };
			Assert::AreEqual(findLargestEven(arr, 4), 8);
		}
	};
}
