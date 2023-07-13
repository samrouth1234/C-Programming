#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10][20],temp1[10];
	int age[10],temp2;
	float avg[10],temp3;
	int i,j,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("name=");fflush(stdin);gets(name[i]);
		printf("age=");scanf("%d",&age[i]);
		printf("avg=");scanf("%f",&avg[i]);
	}
	printf("\n output data Before sort\n");
	for(i=0;i<n;i++)
		printf("%-15s %-4d %-8.2f\n",name[i],age[i],avg[i]);
		for(i=0;i=n-1;i++)
			for(j=i+1;j<n;j++)
				if(avg[i]>avg[j])
				{
					strcpy(temp1,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],temp1);
					
					temp2=age[i];
					age[i]=age[j];
					age[j]=temp2;
					
					temp3=avg[i];
					avg[i]=avg[j];
					avg[j]=temp3;
				}
		printf("\n output data after sort\n");
		for(i=0;i<n;i++)
		{
			printf("%-15s %-4d %-8.2f\n",name[i],age[i],avg[i]);
		}
	getch();
}
