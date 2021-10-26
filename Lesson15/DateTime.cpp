#include "DateTime.h"

//ѕровер€ет високосность года
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

//¬озвращает true, если первый день ближе к новому году
bool LaterInYear(int m1, int d1, int m2, int d2)
{
	if (m1 > m2) return true;
	else return (d1 > d2);
}