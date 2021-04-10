#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab4.1\Lab4.1\Area.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab4.1\Lab4.1\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle B(6, 9);
			int S = B.Square();
			Assert::AreEqual(B.Square(), 54.0);
		}
	};
}
