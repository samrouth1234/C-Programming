#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,j,temp;
	int x[5]={7,5,3,6,8};
	printf("\noutput Before sort\n");
	for(i=0;i<n;i++)
		printf("%d\t",x[i]);
	//sort
	for(i=0;i<5-1;i++)
		for(j=i+1;j<5;j++)
			if(x[i]<x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		printf("\noutput after sort\n");
		for(i=0;i<5;i++)
			printf("%d\t",x[i]);
		getch();
}
