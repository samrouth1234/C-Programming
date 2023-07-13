#include<stdio.h>
#include<conio.h>
int main()
{
	//pointer 1 to 5
	
	int x[5]={1,2,3,4,5};
	int *p;
	p=x;//or p=&x[0]
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	

	//pointer 5 to 1
/*	

	int x[5]={1,2,3,4,5};
	int *p;
	p=x+4;
	for(int i=0;i<5;i++)h
		printf("%d\n",*(p-i));	
*/

// 5 to 1
/*
	int x[5];
	int *p;
	p=x+4;
	for(int i=0;i<5;i++)
		{
		printf("X[%d]=",i);
		scanf("%d",  (p-i));
		}
	for(int i=0;i<5;i++)
		printf("%d\t",x[i]);
*/
// 1 to 5
/* 
 	int x[5];
	int *p;
	p=x;
	for(int i=0;i<5;i++)
		{
		printf("X[%d]=",i);
		scanf("%d",(p+i));
		}
	for(int i=0;i<5;i++)
		printf("%4d\t",x[i]);
	
*/
	getch();
}
