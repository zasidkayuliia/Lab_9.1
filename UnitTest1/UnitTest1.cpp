#include "../Lab_9_1/dod.h"
#include "../Lab_9_1/dod.cpp"
#include "../lab 9.1.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;
using namespace nsDod;
using namespace nsVar;


namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Ініціалізація тестових значень
            x = 0.9;
            eps = 0.000001;

            // Виклик функції обчислення суми
            sum();

            // Перевірка результату
            Assert::AreEqual(1.47222, s, 0.0001); // Очікуване значення s для x = 0.9


        }
    };
}
            