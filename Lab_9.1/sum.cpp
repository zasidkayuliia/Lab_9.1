//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������
#include "math.h"
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������17
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = x;
	s = a;
	do {
		n++;
		dod(); // ������ ��������� ���������� �������
		s += a;
	} while (fabs(a) >= eps);
}