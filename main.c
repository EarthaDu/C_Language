#include<stdio.h>
#include<string.h>
void insertSort(int a[],int len)
{
    int i,j,t;
    for(i=1;i<len;++i)
    {
        j = i;
        t = a[i];
        while(j>0&&a[j-1]>t)
        {
            a[j] = a[j-1];
            --j
        }
        a[j] = t;
    }
}
void choiseSort(int a[],int len)
{
    int i,j,t;
    for(i = 0;i<len-1;++i)
    {
        for(j = i + 1;j < len;++j)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void bubbleSort(int a[],int len)
{
    int i,j,t;
    for(j = len - 1;j > 0;--j)
    {
        for(i=0;i<j;++i)
        {
            if(a[i]>a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            } 
        }
    }
}
int  binarysearch(int a[],int len ,int n)
{
    int beg = 0;
    int end = len-1;
    int mid = (beg + end) / 2;
    int flag = 0;
    while(beg<end)
    {
        if(a[mid]>n)
        {
            end = mid -1;
        }
        else if(a[mid]<n)
        {
            beg = mid+1;
        }
        else
            break;
    }
    if(!(beg<end))
    {
        flag = 1;
    }
    return flag;
}
int palindromeIs(char a[],int len)
{
    int i,j;
    char t[len];
    strcpy(t,a);
    for(i=0;i<len/2;++i)
    {
        char tmp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = tmp;
    }
    return strcmp(t,a);
}
int palindromeOfNumber(int n)
{

}
int main(int argc, const char *argv[])
{
    
    return 0;
}
