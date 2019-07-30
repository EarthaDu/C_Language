#include <stdio.h>
#include "strfunc.h"
int main(int argc, const char *argv[])
{
    char s[100] = "hellow world!";
    char t[100];
    char H[100] = "hello";
    char W[100] = "world!";
    int len = 0;
    printf("s = ");
    Puts(s);
    printf("H = ");
    Puts(H);
    printf("W = ");
    Puts(W);
    len = Strlen(s);
    printf("s_len = %d\n",len);
    Strcpy(t,s);
    printf("copyed s = ");
    Puts(t);
    Strcat(H,W);
    printf("H + W = ");
    Puts(H);
    printf("big or small = %d\n",Strcmp(H,W));
    strStupper(s);
    Puts(s);
    strlow(s);
    Puts(s);
    return 0;
}
