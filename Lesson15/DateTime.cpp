#include "DateTime.h"

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

int SecondsInMinute(int min)
{
	return min * 60;
}