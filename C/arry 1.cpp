#include<stdio.h>
#include<conio.h>
int main(){
	char name[10][20];
	char sex[10];
	int age[10];
	float avg[10];
	int n,i;
	printf("Enter n=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	printf("name=");fflush(stdin);gets(name[i]);
	printf("sex=");fflush(stdin);scanf("%c",&sex[i]);
	printf("age=");fflush(stdin);scanf("%d",&age[i]);
	printf("avg=");scanf("%f",&avg[i]);
	}
	printf("\n output data\n");
	for(i=0;i<n;i++)
	printf("%-15s %-4c %-4d %-10.2f\n",name[i],sex[i],age[i],avg[i]);
	getch();
	return 0;
}
