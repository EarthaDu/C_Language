#include<stdio.h>
void theSecondParamter(char *s,int *nun)
{
		int i=0;
		int n=1;
		int k ;
		while(s[i++])
		{
				if(s[i]!= ' '&&s[i+1] == ' '&&s[i+1]!=0 )
				{
						n++;
				}
				if(2 == n)
				{
					k =i;
				}
		}
		*nun=k;
}
int main(int argc, const char *argv[])
{
	char s1[100];
	gets(s1);
	int num = 0;
	theSecondParamter(s1,&num);
	printf("%d\n",num);
	return 0;
}
