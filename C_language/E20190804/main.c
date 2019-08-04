#include<stdio.h>
#include "clock.h"
#if 0
void swap(int *p,int *q)
{
	int t = *p;
	*p = *q;
	*q = t;
}
void QSort(int *begin ,int *end)
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
}
void printArray(const int *a,int len)
{
	int i;
	for(i=0;i<len;++i)
	{
		printf("%d,",a[i]);
	}
	printf("\b \n");
}
int main(int argc, const char *argv[])
{
	int a[] = {18,23,45,67,89,85,20,74,19,63,75,29,51};
	QSort(a,a+sizeof(a) / sizeof(a[0]) - 1);
	printArray(a,sizeof(a) / sizeof(a[0]));
	return 0;
}
#endif
#include<stdlib.h>
struct Date
{
	int year;
	int month;
	int days;
};
struct Student
{
	int NO;
	char Name[100];
	float score;
	struct Date Birthday;
};
void swap(struct Student *begin,struct Student *end)
{
	struct Student t = *begin;
	*begin = *end;
	*end = t;
}
void scanaStudent(struct Student *st)
{
	scanf("%d%s%f%d%d%d",&st->NO,st->Name,&st->score,&st->Birthday.year,&st->Birthday.month,&st->Birthday.days);
}
void printStuden(struct Student *st)
{

	printf("%d %s %f,%4d-%02d-%02d\n",st->NO,st->Name,st->score,st->Birthday.year,st->Birthday.month,st->Birthday.days);
}
void printStudens(struct Student *st ,int len)
{
	int i;
	for(i=0;i<len;++i)
	{
		printStuden(st+i);
	}
}
void QSort(struct Student *begin,struct Student *end)
{
	if(begin>=end)
	{
		return;
	}
	struct Student *p = begin;
	struct Student *q = end;
	float s = begin->score;
	while(begin<end)
	{
		while(begin<end&&end->score>=s)
		{
			--end;
		}
		while(begin<end&&begin->score<=s)
		{
			++begin;
		}
		swap(begin,end);
	}
	swap(p,end);
	QSort(p,begin-1);
	QSort(begin+1,q);
}
union ddd
{
	char c;
	int i;
};
struct Node
{
	int data;
	struct Node *next;
};
void push_front(struct Node *pHead,int data)
{
	struct Node *pNew = malloc(sizeof(struct Node));
	pNew->data = data;
	pNew->next = pHead->next;
	pHead->next = pNew;
}
void showList(struct Node * pHead)
{
	struct Node *p = pHead->next;
	while(p != NULL)
	{
		printf("%d -> ",p->data);
		p = p->next;
	}
	printf("\b\b\b    \n");
}
unsigned int lensOfList(struct Node *pHead)
{
	struct Node *p = pHead->next;
	unsigned int counter = 0;
	while(p != NULL)
	{
		++counter;
		p = p->next;
	}
	return counter;
}
void push_back(struct Node *pHead,int n)
{
	struct Node *p = pHead;
	while(p->next != NULL)
	{
		p = p->next;
	}
	struct Node *q = malloc(sizeof(struct Node));
	q->data = n;
	p->next = q;
	q->next =NULL;
}
int isEmpty(struct Node *pHead)
{
	if(lensOfList(pHead)==0)
	  return 1;
	else
	  return 0;
}
void pop_front(struct Node *pHead)
{
	if(isEmpty(pHead))
	{
		return;
	}
	else
	{
		struct Node *p = pHead->next;
		pHead->next = p->next;
		free(p);
	}

}
void pop_back(struct Node *pHead)
{
	if(isEmpty(pHead))
	{
		return;	
	}
	else if(lensOfList(pHead) == 1)
	{
		pop_front(pHead);
	}
	else
	{	
		struct Node *p = pHead->next;
		while(p->next->next != NULL)
		{
			p = p->next;
		}
		free(p->next);
		p->next = NULL;
	}
}
void freeList(struct Node *pHead)
{
	while(!isEmpty(pHead))
	{
		pop_front(pHead);
	}
}
#if 0
int main(int argc, const char *argv[])
{
	struct Student s[] = {{1,"lisi",90.5,{2014,3,5}},{2,"wangwu",99.5,{1954,2,2}},{3,"zhangsan",85.5,{1998,8,29}}} ;
	QSort(s,s+sizeof(s)/sizeof(s[0])-1);
	printStudens(s,sizeof(s) / sizeof(s[0]));
	printf("%d %s %f,%4d-%02d-%02d\n",s.NO,s.Name,s.score,s.Birthday.year,s.Birthday.month,s.Birthday.days);
	union ddd a;
	a.i =  1;
	if(a.c == 1)
	{
		printf("little\n");
	}
	else
	  printf("big\n");
	printf("%#x\n",a.c);
 
	struct Node head = {-1,NULL};
	struct Node *pHead = &head;
	push_front(pHead,4);
	push_front(pHead,3);
	push_front(pHead,2);
	push_front(pHead,1);
	push_front(pHead,0);
	push_back(pHead,5);
	pop_front(pHead);
	pop_back(pHead);
	showList(pHead);
	freeList(pHead);
	int len = lensOfList(pHead);
	printf("%u\n",len);
	return 0;
}
#endif
int main(int argc, const char *argv[])
{
	struct DateTime t = {2019,8,4,22,22,22};
	run(&t);
	return 0;
}
