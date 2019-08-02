#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int primeNumber(int n)
{
	int j;
	int flag ;
	if(1==n||0==n)
	{
			return 0;
	}
	for(j=2;j<n;++j)
	{
		if(n%j==0)
		{
			flag = 0;
			break;	
		}
	}
	if(!(j<n))
	{	
		flag =  1;
	}
	return flag;
}
int palindromeNUmber(int n)
{
		int t =n;
		int sum =0;
		while(t)	
		{
			sum = sum*10 +t%10;
			t /=10;
		}
		if(n == sum)
		{	
				return 1;
		}
		else
		{
				return 0;
		}
}
int divByFive(int n)
{
		if(n%5==0)
		{
				return 1;
		}
		else
			  return 0;
}
void printfOfNumber(int n,int (*p)(int))
{
		int i;
	for(i=1;i<n;++i)
	{
			if(p(i))
			{
					printf("%d\n",i);
			}
	}
}
int intCmp(const void *d1,const void *d2)
{
		int *p1 = (int *)d1;
		int *p2 = (int *)d2;
//		return *p1==*p2 ? 0: *p1< *p2 ? -1:1;
		return *p1-*p2;
}
void reserve( char *a[],int len)
{
		char *temp;
		int i;
		for(i=0;i<len/2;++i)
		{
				temp = a[i];
				a[i] = a[len-i-1];
				a[len-i-1] = temp;
		}
}
void printArry( char **p,int len)
{
		int i;
		for(i=0;i<len;++i)
		{
				puts(p[i]);
		}
}
void swap(char *p,char *t)
{
		char *temp;
		temp = p;
		p = t;
		t = temp;
}
void sortStings(char **p,int len)
{
		int i;
		for(i=1;i<len;++i)
		{
				int j =i;
				char *t =p[i];
				while(j>0&&strcmp(p[j-1],t)>0)
				{
						p[j] = p[j-1];
						--j;
				}
				p[j] = t;
		}
}
#if 0
int main(int argc, const char *argv[])
{
	int a[]={88,57,85,47,85,14,75,44,54,78,52,14,56,24,85,62,14,86,21,47,86};
	qsort(a,sizeof(a) / sizeof(a[0]),sizeof(a[0]),intCmp);
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);++i)
	{
			printf("%d,",a[i]);
	}
	printf("\b \n");
//	printfOfNumber(n,divByFive);
	return 0;
}
#endif
int *find(int *begn,int *end,int n)
{
		int *mid;
		while(begn<=end)
		{
				mid = begn +(end - begn)/2;
				if(*mid>n)
				{
						end = mid - 1;
				}
				else if(*mid < n)
				{
						begn = mid + 1;
				}
				else 
					  return mid;
		}
		return NULL;
}
int main(int argc, const char *argv[])
{
//	char *pstr[]={"Hello","World!","C language"};
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	printf("%d\n",*(find(a,a+sizeof(a)/sizeof(a[0])-1,8)));
//	sortStings(pstr,sizeof(pstr)/sizeof(pstr[0]));
//	printArry(pstr,sizeof(pstr)/sizeof(pstr[0]));
	return 0;
}
