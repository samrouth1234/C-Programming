#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10][20];
	char sex[10];
	int age[10];
	float avg[10];
	int i,n;
	char*st[10];
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("name=");fflush(stdin);gets(name[i]);
		printf("sex=");scanf("%c",&sex[i]);
		printf("age=");scanf("%d",&age[i]);
		printf("avg=");scanf("%f",&avg[i]);
	}
	for(i=0;i<n;i++)
	{
		if(avg[i]<50)
			st[i]="failed";
		else
			st[i]="passed";
	}
	printf("\n outdata \n");
	for(i=0;i<n;i++)
	printf("%-15s %-4c %-4d %-12.2f %-15s\n",name[i],sex[i],age[i],avg[i],st[i]);

	getch();
}
