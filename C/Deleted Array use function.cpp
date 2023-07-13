/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Show_Array (int x[],int n)
{
	for(int i=0;i<n;i++)
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
void deleted(int x[],int &n)
{
	int d;
	printf("\nEnter number to delete=");
	scanf("%d",&d);
	for(int i=0;i<n;i++)
		if(x[i]==d)
		{
			for(int j=i;j<n;j++)
			x[j]=x[j+1];
			n--;
		}
}
int main()
{
	int a[20],n;
	printf("Enter n=");
	scanf("%d",&n);
	input_Array(a,n);
	printf("\noutput Before delete\n");
	Show_Array(a,n);
	deleted(a,n);
	printf("\noutput after delete\n");
	Show_Array(a,n);
	getch();
}
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void input_Data(int id,char name,char sex,float salary,int n);
void output_Data(int id,char name,char sex,float salary ,int n);
void input_Data(int n)
{
	int i;
	int id[20];
	char name[20];
	char sex[20];
	float salary[20];
	printf("Enter n=");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter id=");scanf("%d",&id[i]);
		printf("Enter name=");fflush(stdin);gets(name[i]);
		printf("Enter sex=");scanf("%c",&sex[i]);
		printf("Enter salary=");scanf("%f",&salary[i]);
	}
}
void output_Data(int n)
{
	for(i=0;i<n;i++)
	{
		printf("%-4d %-15s %-4c %-10.2f\n"id[i],name[i],sex[i],salary[i]);
	}
}
void deleted (int n,int&n)
{
	char dname[20];
	printf("Enter name to deleted =");fflush(stdin);gets(dname);
	for(i=0;i<n;i++)
	if(strcmp(name[i],dname)==0)
	{
		for(j=i;j<n;j++)
		{
			id[j]=id[j+1];
			strcpy(name[j],dname[j+1]);
			sex[j]=sex[j+1];
			salary[j]=salary[j+1];
		}
		n--;
		i--;
	}
}
int main(){
	input_Data(n,id,name,sex,salary);
	printf("\noutput Before delete\n");
	output_Data(n,id,name,sex,salary);
	deleted(n,id,name,sex,salary);
	printf("\noutput after delete\n");
	output_Data(n);
	getch();
	
	
}
