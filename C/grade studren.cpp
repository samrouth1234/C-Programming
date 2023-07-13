#include<stdio.h>
#include<conio.h>
int main(){
	int id;
	char name[20];
	char sex;
	int age;
	float avg;
	char grade;
	printf("Enter id=");scanf("%d",&id);
	printf("Enter name=");fflush(stdin);gets(name);
	printf("Enter sex=");scanf("%c",&sex);
	printf("Enter age=");scanf("%d",&age);
	printf("Enter avg=");scanf("%f",&avg);
	if(avg<50)
		grade='F';
		else if(avg<65)
			grade='E';
			else if(avg<75)
				grade='D';
				else if(avg<85)
					grade='c';
					else if(avg<95)
						grade='B';
						else
						grade='A';
	printf("%4d %15s %4c %4d %10.2f %4c",id,name,sex,age,avg,grade);
getch();
}
