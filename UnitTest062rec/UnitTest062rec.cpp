#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2-rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest062)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -29;
            int MAX = 30;
            int i = 0;
            create(arr, SIZE, MIN, MAX, 0);
            Assert::AreEqual(-28, findMin(arr, SIZE, 0, arr[0]), 0.0001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -29;
            int MAX = 30;
            int i = 0;
            create(arr, SIZE, MIN, MAX, 0);
            Assert::AreEqual(27, findMax(arr, SIZE, 0, arr[0]), 0.0001);
        }
    };
}
