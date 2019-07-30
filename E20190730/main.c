#include <stdio.h>
#include "strfunc.h"
#if 0
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
#endif
int main(int argc, const char *argv[])
{
    int a[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    char s[][100] = {"Hello","World","China","USA"};
    sortStrings(s,sizeof(s)/sizeof(s[0]));
    printfStrings(s,sizeof(s)/sizeof(s[0]));
    return 0;
}
