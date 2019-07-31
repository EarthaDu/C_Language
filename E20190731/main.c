#include<stdio.h>
#if 0
void fn(char c)
{
		if('A' == c)
		{
				printf("%c%c%c\n",'Z','A','B');
		}
		else if('Z' == c)
		{
				printf("%c%c%c\n",'Y','Z','A');
		}
		else
		{
				printf("%c%C%c\n",c-1,c,c+1);
		}


}
int main(int argc, const char *argv[])
{
		char c;
		c = getchar();
		fn(c);
		return 0;
}
#define MAX(a,b) (((a) > (b)) ?((a) : (b)))
int main(int argc, const char *argv[])
{
	printf("%d\n",MAX(6,5));
	return 0;
}
#include<math.h>
#define S(a,b,c) ((1.0/2)*((a)+(b)+(c)))
#define AREA(a,b,c) (sqrt(S(a,b,c)*(S(a,b,c)-(a))*(S(a,b,c)-(b))*(S(a,b,c)-(c))))
int main(int argc, const char *argv[])
{
	int a = 6,b = 6,c = 6;
	double area = AREA(a,b,c);
	printf("%f\n",area);
	return 0;
}
int main(int argc, const char *argv[])
{
	char *p ;
	printf("%ld\n",sizeof(p));
	return 0;
}
void swap(int *p1,int *p2)
{
		int t;
		t = *p1;
		*p1 = *p2;
		*p2 = t;
}

int main(int argc, const char *argv[])
{
	int i =100,j=200;
	swap(&i,&j);
	printf("%d,%d\n",i,j);
	return 0;
}
#endif
void maxMinOfThreeNumber(int a,int b,int c,int *pMax,int *pMin)
{
		*pMax = a > b ? a : b;
		*pMax =*pMax > c ? *pMax :  c;
		*pMin = a < b ? a : b;
		*pMin = *pMin < c ? *pMin : c;
}
int main(int argc, const char *argv[])
{
	int a=15,b = 10,c=20;
	int max;
	int min;
	maxMinOfThreeNumber(a,b,c,&max,&min);
	printf("%d,%d\n",max,min);
	return 0;
}
