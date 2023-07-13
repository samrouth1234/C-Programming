/*
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int *p;
	a=12;
	p=&a;
	printf("%d\n",p);// pointer address
	printf("%d\n",*p);// pointer verible
	
	getch();
}
*/
/*
#include<stdio.h>
#include<conio.h>
int main(){
	int a[5]={1,2,3,4,5}; //pointer 
	int *p;
	p=a;
	for(int i=1;i<=5;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	printf("\noutput reverse order Array\n");
	for(int i=1;i<=5;i++)
	{
		printf("%d\t",*(p-i));	
	}
	getch();
}
*/
#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	float*p;
	printf("Enter n=");scanf("%d",&n);
	float *avg =new float[n];
	p=avg;
	for(i=0;i<n;i++)
	{
		printf("avg[%d]=",i);
		scanf(" %f ",(p+i));
	}
	printf("\n output array\n");
	for(i=0;i<n;i++)
	    printf("%6.2f",avg[i]);
	p=&avg[n-1];
	printf("\n output reverse order array\n");
	for(i=0;i<n;i++)
  	   printf("%6.2f",*(p-i));
	getch();
}

