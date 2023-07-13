#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int id[10],temp1;
	char name[10][20],temp2[20];
	char sex[10],temp3;
	char age[10],temp4;
	float avg[10],temp5;
	int i,j,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Input id=");scanf("%d",&id[i]);
		printf("Input name=");fflush(stdin);gets(name[i]);
		printf("Input Sex=");scanf("%c",&sex[i]);
		printf("Input age=");scanf("%d",&age[i]);
		printf("Input avg=");scanf("%f",&avg[i]);
	}
	printf("\n Output data Before sort\n");
	for(i=0;i<n;i++)
	{
		printf("%-4d %-15s %-4c %-4d %-10.2f\n",id[i],name[i],sex[i],age[i],avg[i]);
	}
	//sort
	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(age[i]>age[j])
			{
				temp1=id[i];
				id[i]=id[j];
				id[j]=temp1;
				
				strcpy(temp2,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp2);
				
				temp3=sex[i];
				sex[i]=sex[j];
				sex[j]=temp3;
				
				temp4=age[i];
				age[i]=age[j];
				age[j]=temp4;
				
				temp5=avg[i];
				avg[i]=avg[j];
				avg[j]=temp5;
				
			}
	printf("\n Output data After sort\n");
	for (i=0;i<n;i++)
	{
		printf("%-4d %-15s %-4c %-4d %-10.2f\n",id[i],name[i],sex[i],age[i],avg[i]);
	}
	getch();	
}
