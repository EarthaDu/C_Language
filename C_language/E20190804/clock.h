#ifndef _CLOCK_H_
#define _CLOCK_H_
#include <stdio.h>
#include <unistd.h>
struct DateTime
{
	int year;
	int month;
	int day;
	int hour;
	int minite;
	int second;
};
extern void inYear(struct DateTime *pdt);
extern void inMonth(struct DateTime *pdt);
extern void indays(struct DateTime *pdt);
extern void inHour(struct DateTime *pdt);
extern void inMinit(struct DateTime *pdt);
extern void inSecond(struct DateTime *pdt);
extern void showTime(const struct DateTime *pdt);
extern void run(struct DateTime *pdt);











#endif
