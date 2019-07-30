#include"calendar.h"
#include<stdio.h>
int isLeapYear(int year)
{
	return (year%4==0&&year%100!=0)||year%400==0;
}
int daysOfTheMonth(int year,int month)
{
	int daysOfMonth[] = {31,0,31,30,31,30,31,31,30,31,30,31};
	int days;
	if(2 == month)
	{
		if(isLeapYear(year))
		{
			days = 29;
		}
		else 
		{
			days = 28;
		}
	}
	else
	{
		days = daysOfMonth[month - 1];
	}
	return days;
}
int sumOfDaysBefor1860(int year ,int month)
{
	int i,sum=0;
	for(i=1860;i<year;++i)
	{
		if(isLeapYear(i))
		{
			sum += 366;
		}
		else
		{
			sum +=365;
		}
	}
	for(i = 1;i<month;++i)
	{
		sum +=daysOfTheMonth(year,i);
	}
	return sum;
}
int weekOfDays(int year ,int month)
{
	return sumOfDaysBefor1860(year,month) % 7;
}
void printWeekOfDays(int year,int month)
{
	puts(" Sun Mon Tue Wed Thu Fri Sat");
	int days = daysOfTheMonth(year,month);
	int week = weekOfDays(year,month);
	int i,k=0;
	for(i=0;i<week;++i)
	{
		printf("   ");
		++k;
	}
	for(i = 1;i<=days;++i)
	{
		printf("%4d",i);
		++k;
		if(k%7==0)
		{
			puts("");
		}
	}
	puts("");
}
