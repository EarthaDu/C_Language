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

void maxOfArray(int *p,int len,int* m)
{
		*m = p[0];
		int i=0;
		for(i = 0;i<len ;++i)
		{
				if(*m<*(p+i))
				{
						*m = *(p+i);
				}
		}
}
void choiceSort(int *p,int len)
{
		int i,j;
		for(i=0;i<len-1;++i)
		{
				for(j = i+1;j<len;++j)
				{
						if(*(p+i)>*(p+j))
						{
								int t = *(p+i);
								*(p+i) = *(p+j);
								*(p+j) = t;
						}
				}
		}
}
void bubbleSort(int *p,int len)
{
		int i,j,t;
		for(j = len -1;j>0;--j)
		{
				for(i=0;i<j;++i)
				{
						if(*(p+i)>*(p+i+1))
						{
								t = *(p+i);
								*(p+i) = *(p + i +1);
								*(p + i +1) = t;
						}
				}
		}
}
void insertSort(int *p,int len)
{
		int i,j,t;
		for(i =0;i<len;++i)
		{
				j = i;
				t =*(p+i);
				while(j>0&&*(p+j-1)>t)
				{
						*(p+j) = *(p+j-1);
						--j;
				}
				*(p+j)=t;
		}
}
void reserveSrt(int *p,int len)
{
		int i,t;
		for(i = 0;i<len/2;++i)
		{
				t =*(p+i);
				*(p+i) = *(p+len - i - 1);
				*(p+len - i -1) = t;
		}
}
void binaryFind(int *p,int len,int *n,int *conter)
{
		int beg = 0;
		int end = len - 1;
		int mid;
		insertSort(p,len);
		while(beg<end)
		{
			mid = (beg + end) / 2;
			if(*(p+mid)>*n)
			{
					end = mid -1;
			}
			else if(*(p+mid)<*n)
			{
					beg = mid +1;
			}
			else 
				  break;
		}
		if(!(beg<end))
		{
				*conter = mid;

		}
		else
		{
				*conter = -1;
		}
}
void printArray(int *p ,int len)
{
		int i;
		for(i=0;i<len;++i)
		{
				printf("%d," ,*(p+i));
		}
		printf("\b \n");
}
int main(int argc, const char *argv[])
{
	int a[] = {65,55,45,53,84,48,54,51,48,54,85,14};
	int len = sizeof(a) / sizeof(a[0]);
	int max;
	bubbleSort(a,len);
//	choiceSort(a,len);
//	reserveSrt(a,len);
//	insertSort(a,len);
//	maxOfArray(a,len,&max);
//	printf("%d\n",max);
	printArray(a,len);
	return 0;
}
#endif
void reserveArray(int *begin,int *end)
{
		int t;
		while(begin<end)
		{
			t = *begin;
			*begin = *end;
			*end = t;
			++begin;
			--end;
		}
}
void printArray(int *begin ,int *end)
{
		int *p;
		for(p=begin;p<=end;)
		{
				printf("%d ",*p++);
		}
		printf("\n");
}
void swap(int *p,int *q)
{
		int t ;
		t = *p;
		*p = *q;
		*q = t;
}
void choiceSort(int *begin,int *end)
{
		int *p;
		for(;begin<end;++begin)
		{
				for(p = begin ; p<=end;++p)
				{
						if(*begin>*p)
							swap(begin,p);
				}
		}
}
void bubbleSort(int *begin,int *end)
{
		int *p ;
		for(;end>=begin;--end)
		{
				for(p = begin;p<end;++p)
				{
					if(*(p)>*(p+1))
					{
							swap(p,p+1);
					}
				}
		}
}
void insertSort(int *begin,int *end)
{
		int *p;
		for(p = begin+1;p<=end;++p)
		{
				int *t = p;
				int temp =*p;
				while(t>begin&&*(t-1)>temp)
				{
						*t=*(t-1);
						--t;
				}
				*t=temp;
		}
}
int main(int argc, const char *argv[])
{
	int a[] = {65,55,45,53,84,48,54,51,48,54,85,14};
	printArray(a,a+sizeof(a) / sizeof(a[0])-1);
//	choiceSort(a,a+sizeof(a) / sizeof(a[0])-1);
//	printArray(a,a+sizeof(a) / sizeof(a[0])-1);
//	reserveArray(a,a+sizeof(a) / sizeof(a[0]) - 1);
	insertSort(a,a+sizeof(a) / sizeof(a[0]) - 1);
	printArray(a,a+sizeof(a) / sizeof(a[0])-1);
	return 0;
}
