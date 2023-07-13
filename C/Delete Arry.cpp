#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10][20],dname[20];
	char sex[10];
	int age[10];
	float avg[10];
	int i,j,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Input name=");fflush(stdin);gets(name[i]);
		printf("Input sex=");scanf("%c",&sex[i]);
		printf("Input age=");scanf("%d",&age[i]);
		printf("Input avg=");scanf("%f",&avg[i]);
	}
	printf("Output element Befor Deleted\n");
	for(i=0;i<n;i++)
	{
		printf("%-15s %-4c %-4d %-10.2f\n",name[i],sex[i],age[i],avg[i]);
	}
	printf("Enter name to delete:");
	fflush(stdin);gets(dname);
	//delete
	for(i=0;i<n;i++)
		if(strcmpi(name[i],dname)==0)
		{
			for(j=i;j<n;j++)
			{
				strcpy(name[j],name[j+1]);
				sex[j]=sex[j+1];
				age[j]=age[j+1];
				avg[j]=avg[j+1];
			}
			n--;
			i--;
		}
	printf("Output Element Ater Deleted \n");
	for(i=0;i<n;i++)
	{
		printf("%-15s %-4c %-4d %-10.2f\n",name[i],sex[i],age[i],avg[i]);
	}
	getch();
	
}
