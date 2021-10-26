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

int DaysInYear(int y)
{
	if (IsLeapYear(y))
		return 366;
	return 365;
}

int DaysInYearRange(int y1, int y2)
{
	int sum = 0;
	for (int i = y1; i <= y2; i++)
		sum += DaysInYear(i);
	return sum;
}

int SeconsInHours(int h)
{
	return h * 3600;
}