#include"clock.h"
 


static int isleapYear(int year)
{
	return year%4==0&&year%100!=0||year%400==0;
}
static int daysOfTheMonth(int year,int month)
{
	int days[] = {31,0,31,30,31,30,31,31,30,31,30,31};
	if(month != 2)
	{
		return days[month - 1];
	}
	else
	{
		if(isleapYear(year))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
}
void inYear(struct DateTime *pdt)
{
	pdt->year += 1;
}
void inMonth(struct DateTime *pdt)
{
	pdt->month += 1;
	if(pdt->month>12)
	{
		inYear(pdt);
		pdt->month = 1;
	}
}
void inDays(struct DateTime *pdt)
{
	pdt->day += 1;
	if(pdt->day>daysOfTheMonth(pdt->year,pdt->month))
	{
		inMonth(pdt);
		pdt->day = 1;
	}
}
void inHour(struct DateTime *pdt)
{
	pdt->hour += 1;
	if(pdt->hour>23)
	{
		inDays(pdt);
		pdt->hour = 0;
	}
}
void inMinit(struct DateTime *pdt)
{
	pdt->minite += 1;
	if(pdt->minite>59)
	{
		inHour(pdt);
		pdt->minite = 0;
	}
}
void inSecond(struct DateTime *pdt)
{
	pdt->second += 1;
	if(pdt->second>59)
	{
		inMinit(pdt);
		pdt->second = 0;
	}
}
void showTime(const struct DateTime *pdt)
{
	printf("%4d-%2d-%2d %02d:%02d:%02d\r",pdt->year,pdt->month,pdt->day,pdt->hour,pdt->minite,pdt->second);
	fflush(stdout);
}
void run(struct DateTime *pdt)
{
	while(1)
	{
		inSecond(pdt);
		showTime(pdt);
		sleep(1);
	}
}
