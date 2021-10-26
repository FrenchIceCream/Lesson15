#include "DateTime.h"

//��������� ������������ ����
bool IsLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 != 0)
				return false;
		}
		return true;
	}
	return false;
}

//���������� true, ���� ������ ���� ����� � ������ ����
bool LaterInYear(int m1, int d1, int m2, int d2)
{
	if (m1 > m2) return true;
	else return (d1 > d2);
}