/*
#include<stdio.h>
#include<conio.h>
void Show_Array(int x[],int n)
{
	for (int i=0;i<n;i++)
	printf("%4d",x[i]);
}
void input_Array(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
}
void sort (int x[],int n)
{
	int temp;				//sort
	for (int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(x[i]<x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
}
int main()
{
	int a[20],n;
	printf("Enter n=");
	scanf("%d",&n);
	input_Array(a,n);
	printf("\noutput Before sort\n");
	Show_Array(a,n);
	sort(a,n);
	printf("\noutput After sort\n");
	Show_Array(a,n);
	getch();
}
*/

