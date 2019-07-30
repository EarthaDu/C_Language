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
