#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10][20],sname[20];
	char sex[10];
	int age[10];
	float avg[10];
	int i,k=0,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Input name=");fflush(stdin);gets(name[i]);
		printf("Input sex=");scanf("%c",&sex[i]);
		printf("Input age=");scanf("%d",&age[i]);
		printf("Input avg=");scanf("%f",&avg[i]);
	}
	printf("Output data Befor search\n");
	for(i=0;i<n;i++)
	{
		printf("%-15s %-4c %-4d %-8.2f\n",name[i],sex[i],age[i],avg[i]);
	}
	printf("Enter name to search :");
	fflush(stdin);gets(sname);
	//search
	for(i=0;i<n;i++)
		if (strcmpi(name[i],sname)==0)
		{
			k=k+1;
			printf("%-15s %-4c %-4d %-8.2f \n",name[i],sex[i],age[i],avg[i]);
		}
		if (k==0)
		{
			printf("Search not found");
		}
		
		getch();
}
