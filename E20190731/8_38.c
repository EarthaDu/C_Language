#include<stdio.h>
void insertSort(int *beg,int *end)
{
		int *p;
		for(p = beg+1;p<=end;++p)
		{
				int *t = p;
				int temp = *p;
				while(t>beg&&*(t-1)>temp)
				{
						*t = *(t-1);
						--t;
				}
				*t = temp;
		}
}
void swap(int *a,int *b)
{
		int t = *a;
		*a = *b;
		*b = t;
}
void reverse(int *beg,int *end)
{
		while(beg<end)
		{
				swap(beg,end);
				++beg;
				--end;
		}
}
void printArray(int *beg,int *end)
{
		int *p;
		for(p=beg;p<=end;++p)
		{
				printf("%d ",*p);
		}
		printf("\n");
}

int main(int argc, const char *argv[])
{
	int a[] = {18,89,52,35,24,58,85,4,54,5};
	insertSort(a,a+sizeof(a) / sizeof(a[0])-1);
	printArray(a,a+sizeof(a)/sizeof(a[0])-1);
	int n = 4;
	//scanf("%d",&n);
	reverse(a+n,a+sizeof(a)/sizeof(a[0])-1);
	int i =0;
	for(i = 0;i<sizeof(a) / sizeof(a[0]);++i)
	{
			printf("%d ",a[i]);
	}
	printf("\b \n");
	return 0;
}
