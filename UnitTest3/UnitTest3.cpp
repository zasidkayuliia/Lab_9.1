#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.1/var.h"
#include "../Lab_9.1/var.cpp"
#include "../Lab_9.1/sum.h"
using namespace nsSum;
using namespace nsVar;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{// ����������� �������� �������
			x = 0.9;
			eps = 0.000001;

			// ������ ������� ���������� ����
			sum();

			// �������� ����������
			Assert::AreEqual(1.47222, s, 0.0001); // ��������� �������� s ��� x = 0.9

		}
	};
}
