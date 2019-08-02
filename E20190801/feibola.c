#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fn(int n)
{
		if(1==n||2==n)
		{
				return 1;
		}
		else
		{
				return fn(n-1)+fn(n-2);
		}
}
int main(int argc, const char *argv[])
{
	int *p;
	p = malloc(sizeof(int )*10);
	if(p != NULL)
	{
		int i ;
		for(i =0;i<10;++i)
		{
				p[i] = fn(i+1);
		}
		int *q;
		int len =20;
		q = malloc(len * sizeof(int));
		memcpy(q,p,10*sizeof(int));
		free(p);
		p=q;
		for(i=10;i<20;++i)
		{
				q[i]=fn(i+1);
		}
		for(i=0;i<20;++i)
		{
				printf("%d,",q[i]);
		}	
		printf("\b \n");
		free(q);
		q =NULL;
	}
	return 0;
}
