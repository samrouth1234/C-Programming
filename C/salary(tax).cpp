#include<stdio.h>
#include<conio.h>
int main(){
	int id;
	char name[20];
	char sex;
	float salary;
	float tax,amount;
	printf("Enter id=");
	scanf("%d",&id);
	printf("Enter name=");
	fflush(stdin);gets(name);
	printf("Enter sex=");
	scanf("%c",&sex);
	printf("Enter salary=");
	scanf("%f",&salary);
	if(salary<150)
	tax=salary*0.05;
	if(salary>=150&&salary<200)
	tax=salary*0.07;
	if(salary>=200&&salary<300)
	tax=salary*0.08;
	if(salary>=300)
	tax=salary*0.1;
	amount=salary-tax;
	printf("%4d %15s %4c %10.2f %10.2f",id,name,sex,salary,amount);
	getch();
	return 0;
	
}
