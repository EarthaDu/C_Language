#include<stdio.h>
void swap(int *begin,int *end)
{
	int t = *begin;
	*begin = *end;
	*end = t;
}
/*void QSort(int *begin,int *end)
{
	if(begin>=end)
	{
		return ;
	}
	int *p1 = begin;
	int *p2 = end;
	int t = *begin;
	while(begin<end)
	{
		while(begin<end&&t<=*end)
		{
			--end;
		}
		while(begin<end&&t>=*begin)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p1,begin-1);
	QSort(begin+1,p2);
}*/
/*void QSort(int *begin,int *end)
{
	if(begin>=end)
	{
		return;
	}
	int *p = begin;
	int *q = end;
	int t = *begin;
	while(begin<end)
	{
		while(begin<end&&*end>=t)
		{
			--end;
		}
		while(begin<end&&*begin<=t)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p,begin-1);
	QSort(begin+1,q);
}*/
void QSort(int *begin,int *end)
{
	if(begin>=end)
	{
		return;
	}
	int *p =begin;
	int *q = end;
	int t =*begin;
	while(begin<end)
	{
		while(begin<end&&*end>=t)
		{
			--end;
		}
		while(begin<end&&*begin<=t)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p,begin-1);
	QSort(begin + 1, q);
}
/*void QSort(int *begin,int *end)
{
	if(begin>=end)
	{
		return ;
	}
	int *p = begin;
	int *q = end;
	int t = *begin;
	while(begin<end)
	{
		while(begin<end&&*end>=t)
		{
			--end;
		}
		while(begin<end&&*begin<=t)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p,begin-1);
	QSort(begin +1 ,end);
}*/
/*void QSort(int *begin,int *end)
{
	if(begin>=end)
	{
		return;
	}
	int *p = begin;
	int *q = end;
	int t = *begin;
	while(begin<end)
	{
		while(begin<end&&*end>=t)
		{
			--end;
		}
		while(begin<end&&t>=*begin)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p,begin-1);
	QSort(begin +1,q);
}*/
int main(int argc, const char *argv[])
{	
	int a[]={78,85,56,555,25,45,84,65,13,27,89,46,51,23};
	QSort(a,a+sizeof(a)/sizeof(a[0])-1);
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);++i)
	{
		printf("%d,",a[i]);
	}
	printf("\b \n");
	return 0;
}
