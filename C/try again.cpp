#include<stdio.h>
#include<conio.h>
int main(){
	int id;
	char name[20];
	char sex;
	int age;
	char grade;
	float avg;
	printf("Enter id=");scanf("%d",&id);
	printf("Enter name=");fflush(stdin);gets(name);
	printf("Enter sex=");scanf("%c",&sex);
	printf("Enter age=");scanf("%d",&age);
	fflush(stdin);
	printf("Enter grade=");scanf("%c",&grade);
	if(	grade<50)
		grade='f';
	if(	grade>50 &&	grade<60)
		grade='E';
	if(	grade>60 &&	grade<70)
		grade='D';
	if(	grade>70 &&	grade<80)
		grade='c';
	if(	grade>80 &&	grade<90)
		grade='B';
	if(	grade>90 && grade<100)
		grade='A';
	printf("%4d %15s %4c %4d %4c",id,name,sex,age,grade);
	getch();
}
