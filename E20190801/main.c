#include <stdio.h>
#include<string.h>
#if 0
int main(int argc, const char *argv[])
{
	int i =0x012345678;
	char *p;
	p = (char*)(&i);
	if(0x78 == *p)
	{
			puts("little");
	}
	else
		  puts("big");
	printf("%#x\n",*p);
	return 0;
}
void Puts(const char *p)
{
		while(*p)
		{
			putchar(*p++);
		}
		putchar('\n');
}
unsigned int Strlen(const char *p)
{
		unsigned int counter = 0;
		while(*p++)
		{
			++counter;
		}
		return(counter);
}
unsigned int sTrlen(const char *p)
{
		if(*p == 0)
		{
				return 0;
		}
		else
		{
				return sTrlen(p+1)+1;
		}
}
char * Strcpy(char *dest,const char *src)
{
		while(*src)
		{
				*dest++ = *src++;;
		}
		*dest = 0;
		return dest;
}
int Strcmp(const char *s1,const char *s2)
{
		while(*s1&&*s2&&*s1==*s2)
		{
				++s1;
				++s2;
		}
		return *s1-*s2;
}
char *Strcat(char *dest,const char *src)
{
		dest += strlen(dest);
		while(*src)
		{
				*dest++=*src++;
		}
		*dest=0;
		return dest;
}
int main(int argc, const char *argv[])
{

	char s[] ="Hello world!";
	char t[100]="Hello China ";
	Strcat(t,s);
//	printf("%d\n",sTrlen(s));
	Puts(t);
	return 0;
}
#endif
int maxOfArray(int (*a)[4] ,int rows)
{
		int i,j;
		int max = *(*(a));
		for(i = 0;i<rows;++i)
		{
				for(j = 0;j<4;++j);
				{
						if(max<*( *( a + i ) + j))
						{
								max= *( *( a + i ) + j );
						}
				}
		}
		return max;
}
int main(int argc, const char *argv[])
{
	int a[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("%d\n",maxOfArray(a,sizeof(a)/sizeof(a[0])));
	return 0;
}
