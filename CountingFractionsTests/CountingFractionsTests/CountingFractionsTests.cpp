#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CountingFractionsTests2
{		
	class CountingFractions
	{
	public:
		static int CountFractionsTo(int number)
		{
			return 0;

		}
	}; 
	
	TEST_CLASS(CountingFractionsTests)
	{
	public:
		
		TEST_METHOD(CountFractionsTo1)
		{
			// TODO: Your test code here
			int output = CountingFractions::CountFractionsTo(1);
			Assert::AreEqual(0,output);
		}

		TEST_METHOD(CountFractionsTo2)
		{
			// TODO: Your test code here
			int output = CountingFractions::CountFractionsTo(1);
			Assert::AreEqual(1, output);
		}

	};

	
}