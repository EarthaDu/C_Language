#include<stdio.h>
int main(int argc, const char *argv[])
{
	int *p;
	int i=10;
	p =&i;
	printf("%d",*p);
	return 0;
}
