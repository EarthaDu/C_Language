#include "strfunc.h"
#include <stdio.h>
void strlow(char a[])
{
    int i = 0;
    while(a[i])
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i] += 32;
        }
        ++i;
    }
}
void Puts(const char a[])
{
    int i = 0;
    while(a[i])
    {
        putchar(a[i++]);
    }
    putchar('\n');
}
void strStupper(char a[])
{
    int i = 0;
    while(a[i])
    {
        if('a'<=a[i]&&a[i]<='z')
            a[i] -= 32;
        ++i;
    }
}
int  Strlen(const char a[])
{
    int i=0;
    while(a[i])
    {
        ++i;
    }
    return i;
}
void Strcpy(char dest[],const char src[])
{
    int i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i]=0;
}
int Strcmp(const char s1[],const char s2[])
{
    int i=0;
    while(s1[i]&&s2[i]&&s1[i] == s2[i])
    {
        ++i;
    }
    return s1[i]-s2[i];
}
void Strcat(char dest[],const char src[])
{
    int i = 0,n=0;
    while(dest[n])
    {
        ++n;
    }
    while(src[i])
    {
        dest[n++] = src[i++];
    }
    dest[n] = 0;
}
double sumOfSurondOfArray(int a[][4],int rows)
{
    int i,j;
    double sum = 0;
    for(i=0;i<rows;++i)
    {
        for(j = 0;j<4;++j)
        {
            if(0==i||0==j||rows-1==i||3==j)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
void printfStrings(char s[][100],int rows)
{
    int i;
    for(i = 0;i < rows ; ++i)
    {
        puts(s[i]);
    }
}
void reverseStrings(char s[][100],int rows)
{
    int i = 0;
    char temp[100];
    for(i = 0;i<rows/2;++i)
    {
        Strcpy(temp,s[i]);
        Strcpy(s[i],s[rows-i-1]);
        Strcpy(s[rows-i-1],temp);
    }

}
void sortStrings(char s[][100], int rows)
{
    int i , j ;
    char temp[100];
    for(i = 0;i < rows-1;++i)
    {
        for(j=i+1;j<rows;++j)
        {
            if(Strcmp(s[i],s[j])>0)
            {
                Strcpy(temp,s[i]);
                Strcpy(s[i],s[j]);
                Strcpy(s[j],temp);
            }
        }
    }
}
