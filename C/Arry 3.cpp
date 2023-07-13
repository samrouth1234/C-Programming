#include<stdio.h>
#include<conio.h>
int main(){
	int id[10];
	char Name[10][20];
	char sex[10];
	int age[10];
	float avg[10];
	int n,i;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("id[%d]=",i);scanf("%d",&id[i]);
		printf("Name[%d]=",i);fflush(stdin);gets(Name[i]);
		printf("sex[%d]=",i);scanf("%c",&sex[i]);
		printf("age[%d]=",i);scanf("%d",&age[i]);
		printf("avg[%d]=",i);scanf("%f",&avg[i]);
	}
	printf("\n output data\n");
	for(i=0;i<n;i++)
	{
		printf("id[%d]=%d",i,id[i]);
		printf("Name[%d]=%s\n",i,Name[i]);
		printf("sex[%d]=%c\n",i,sex[i]);
		printf("age[%d]=%d\n",i,age[i]);
		printf("avg[%d]=%f\n",i,avg[i]);
	}
	getch();
}
