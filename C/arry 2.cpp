#include<stdio.h>
#include<conio.h>
int main(){
	int age[10];
	char name[10][20];
	int n,i;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Name[%d]=",i);
		fflush(stdin);gets(name[i]);
		printf("age[%d]=",i);scanf("%d",&age[i]);
	}
	printf("\n output data\n");
	for(i=0;i<n;i++)
	{
		printf("age[%d]=%d\n",i,age[i]);
		printf("name[%d]=%s\n",i,name[i]);
	}
	getch();
}
