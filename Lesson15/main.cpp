#include "DateTime.h"
#include <cassert>
int main()
{
	assert(IsLeapYear(2020));
	assert(!IsLeapYear(2001));
	assert(LaterInYear(12, 1, 3, 1));
	assert(!LaterInYear(2, 1, 3, 1));
	assert(DaysInYear(2020) == 366);
	assert(DaysInYear(2019) == 365);
	assert(DaysInYearRange(2019,2021) == 1096);
	assert(SeconsInHours(2) == 7200);
}