#include<stdio.h>
void QSort(int *a ,int left ,int right)
{
	if(left>=right)
	{
		return;	
	}
	int i =left;
	int j = right;
	int key = a[left];
	while(i<j)
	{
		while(i<j&&key<=a[j])
		{
			--j;
		}
		a[i] = a[j];
		while(i<j&&key>=a[i])
		{
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	QSort(a,left,i-1);
	QSort(a,i+1,right);
}
int main(int argc, const char *argv[])
{
	int a[]={78,85,56,555,25,45,84,65,13,27,89,46,51,23};
	QSort(a,0,sizeof(a)/sizeof(a[0])-1);
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);++i)
	{
		printf("%d,",a[i]);
	}
	printf("\b \n");
	return 0;
}
