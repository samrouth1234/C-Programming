/*
#include <stdio.h>
#include <stdlib.h> 
struct Person{
	float income;
	float taxRate;
	float taxPayable;
};
int main() {
	// defines an array of structure to store the record of five persons.
	struct Person persons[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter the person's income: ");
		scanf("%f",&persons[i].income);
		printf("Enter the person's tax rate: ");
		scanf("%f",&persons[i].taxRate);
		persons[i].taxPayable=persons[i].income*(persons[i].taxRate/100.0);
		printf("\n");
	}


	for(i=0;i<5;i++){
		printf("The person %d has tax payable %.2f.\n",(i+1),persons[i].taxPayable);
	}
	getchar();
	getchar();
	return 0;
}*/


/*

#include<stdio.h>
#include<conio.h>  //  input and output struct 
	int main(){
		struct student{
			char id[20];
			char name[20];
			char sex;
			int age;
		}stu[20];
		int i,n;
		printf("\n input data ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("id =");fflush(stdin);
			gets(stu[i].id);
			printf("name=");fflush(stdin);
			gets(stu[i].name);
			printf("sex=");scanf("%c",&stu[i].sex);
			printf("age=");scanf("%d",&stu[i].age);
		}
		printf("\n output data\n");
		for(i=0;i<n;i++)
		{
			printf("%-12s %-15s %-4c %-6d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].age);
		}
		getch();
	}*/
	
/*	

#include<stdio.h>
#include<conio.h>
int main(){
		struct student{
			char id[20];
			char name[20];
			char sex;
			int age;
		}stu[20];
		int i,n;
		char st[5]="Id",st1[5]="Name",st2[5]="Sex",st3[5]="Age";
		
		printf("\n input data ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("id =");fflush(stdin);
			gets(stu[i].id);
			printf("name=");fflush(stdin);
			gets(stu[i].name);
			printf("sex=");scanf("%c",&stu[i].sex);
			printf("age=");scanf("%d",&stu[i].age);
		}
		 printf("\n%-12s %-15s %-6s %-8s\n",st,st1,st2,st3);
		for(i=0;i<n;i++)
		{
			printf("%-12s %-15s %-4c %-6d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].age);
		}
	getch();
}*/

/*

#include<stdio.h>
#include<conio.h>
struct employee // salary of employee in c program use structur
{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
int main()
{
	struct employee emp[20];
	float sa;
	printf("\ninput data ");
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("id=");fflush(stdin);gets(emp[i].id);
		printf("name=");fflush(stdin);gets(emp[i].name);
		printf("sex=");scanf( "%c",&emp[i].sex);
		printf("salary=");scanf("%f",&sa);
		emp[i].salary=sa;
	}
	for(i=0;i<n;i++)
	{
		if(emp[i].salary<250)
			emp[i].tax=emp[i].salary*0.05;
		else if(emp[i].salary<500)
			emp[i].tax=emp[i].salary*0.09;
		else
			emp[i].tax=emp[i].salary*0.12;
			emp[i].total=emp[i].salary-emp[i].tax;
	}
	printf("\noutput data\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary,emp[i].tax,emp[i].total);
	}
	getch();
}*/
/*#include<stdio.h>
  #include<conio.h>
  #include<string.h>
struct student //grade of student in c progamming use structur
{
	char id[20];
	char name[20];
	char sex;
	float avg;
	char grade;
};
int main(){
	struct student stu[20];
	printf("\ninput data ");
	int i,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("id=");fflush(stdin);gets(stu[i].id);
		printf("name=");fflush(stdin);gets(stu[i].name);
		printf("sex=");scanf("%c",&stu[i].sex);
		printf("avg=");scanf("%f",&stu[i].avg);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].avg<50)
			stu[i].grade='F';
		else if(stu[i].avg<60)
			stu[i].grade='E';
		else if(stu[i].avg<70)
			stu[i].grade='D';
		else if(stu[i].avg<80)
			stu[i].grade='C';
		else if(stu[i].avg<90)
			stu[i].grade='B';
		else
			stu[i].grade='A';
	}
	printf("\noutput data\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-4c\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].avg,stu[i].grade);
	}
	getch();
}*/

/*

#include<stdio.h>
#include<conio.h>
struct maximum{
	int a,b,max;
};
int main(){
	struct maximum m[20];
	int i;
	printf("Enter a=");scanf("%d",&m[i].a);
	printf("Enter b=");scanf("%d",&m[i].b);
	if(m[i].a>m[i].b)
	m[i].max=m[i].a;
	else
	m[i].max=m[i].b;
	printf("Maximum a b=%d",m[i].max);
	getch();
}*/
/*
#include<stdio.h>
#include<conio.h>
struct minimum{
	int a,b,min;
};
int main(){
	struct minimum m[20];
	int i;
	printf("Enter a=");scanf("%d",&m[i].a);
	printf("Enter b=");scanf("%d",&m[i].b);
	if(m[i].a>m[i].b)
	m[i].min=m[i].b;
	else
	m[i].min=m[i].a;
	printf("Minimum a b=%d",m[i].min);
	getch();
}
*/	
// sort struct in c programming
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee 
{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
int main()
{
	struct employee emp[20] ,temp;
	float sa;
	printf("\ninput data ");
	int n,i,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("id=");fflush(stdin);gets(emp[i].id);
		printf("name=");fflush(stdin);gets(emp[i].name);
		printf("sex=");scanf( "%c",&emp[i].sex);
		printf("salary=");scanf("%f",&sa);
		emp[i].salary=sa;
	}
	for(i=0;i<n;i++)
	{
		if(emp[i].salary<250)
			emp[i].tax=emp[i].salary*0.05;
		else if(emp[i].salary<500)
			emp[i].tax=emp[i].salary*0.09;
		else
			emp[i].tax=emp[i].salary*0.12;
			emp[i].total=emp[i].salary-emp[i].tax;
	}
	printf("\noutput data before sort employee\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary,emp[i].tax,emp[i].total);
	}
	printf("\noutput data After sort employee\n");
		for(i=0;i<n-1;i++){
			for( j=i+1;j<n;j++){
				if(emp[i].salary < emp[j].salary){
					temp=emp[i];
					emp[i]=emp[j];
					emp[j]=temp;
				}
			}
		}
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",emp[i].id,emp[i].name,emp[i].sex,emp[i].salary,emp[i].tax,emp[i].total);
	}
	getch();
}
*/

//search struct in c programming

/*

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
int main(){
	struct employee em[20];
	int i,j,n,k=0;
	float sa;
	char sname[20];
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
	printf("\noutput data before Search\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	}
	printf("\n\nEnter name to search=");
	fflush(stdin);gets(sname);
	for(i=0;i<n;i++)
		if(strcmpi(em[i].name,sname)==0)
		{
			k=k+1;
			printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
		}
		if(k==0)
			printf("Search not found");
	getch();
}*/

//deleted sturct in c programming

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
int main(){
	struct employee em[20];
	int i,j,n;
	float sa;
	char dname[20];
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
	printf("\noutput data before Deleted\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	}
	printf("\n\nEnter name to deleted=");
	fflush(stdin);gets(dname);
	for(i=0;i<n;i++)
		if(strcmpi(em[i].name,dname)==0)
		{
			for(j=i;j<n;j++)
			{
				em[j]=em[j+1];
				n--;
			}
		}
		printf("\noutput data After delete\n");
		for(i=0;i<n;i++)
		{
			printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
		}
	getch();
}
*/
// update struct of id 
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
int main(){
	struct employee em[20];
	char emp[20]="Id",emp1[20]="Name",emp2[20]="Sex",emp3[20]="Salary",emp4[20]="Tax",emp5[20]="Total";
	int i,n;
	float sa;
	char id_up[20];
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
	printf("\noutput data before update\n");
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	}
	printf("\nEnter id to update=");fflush(stdin);gets(id_up);
	for(int i=0;i<n;i++)
	{
		if(strcmpi(em[i].id,id_up)==0)
		{
			printf("Enter new id=");fflush(stdin);gets(em[i].id);
		}
	}
	printf("\n%-12s %-15s %-4s %-12s%-15s %-12s\n",emp,emp1,emp2,emp3,emp4,emp5);
	for(i=0;i<n;i++)
	{
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	}
getch();
}*/
// updated structur use function 
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};struct employee em[20],temp;

void input_Data(int n)
{
	float sa;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
}
void output_Data(int n)
{
	for(int i=0;i<n;i++)
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	
}
void update_Alldata(int &n)
{
		char id_up[12],name_up[20];char sex_up[20],ch;
		float sa_up;
		printf("\npress i update by id\n");
		printf("\npress n update by name\n");
		ch=getch();
		switch(ch)
	{
		case 'i' :	printf("\nEnter id to update=");fflush(stdin);gets(id_up);
					for(int i=0;i<n;i++)
					{
						if(strcmpi(em[i].id,id_up)==0)
						{
						printf("Enter new id=");fflush(stdin);gets(em[i].id);
						}
					}
					break;
		case 'n' : 	printf("\nEnter name to update=");fflush(stdin);gets(name_up);
					for(int i=0;i<n;i++)
					{
						if(strcmpi(em[i].name,name_up)==0)
						{
						printf("Enter new name=");fflush(stdin);gets(em[i].name);
						}
					}
					break;
		
	}
	

}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor updated\n");
	output_Data(n);
	update_Alldata(n);
	printf("\noutput data After updated\n");
	output_Data(n);
	getch();
}
*/
//struct sort use function in c programmimg
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};struct employee em[20],temp;

void input_Data(int n)
{
	float sa;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
}
void output_Data(int n)
{
	for(int i=0;i<n;i++)
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	
}
void sort(int &n)
{
	for( int i=0;i<n-1;i++)
		for( int j=i+1;j<n;j++){
			if(em[i].salary < em[j].salary)
			{
				temp=em[i];
				em[i]=em[j];
				em[j]=temp;
			}
		}	
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor sort\n");
	output_Data(n);
	sort(n);
	printf("\noutput data After sort\n");
	output_Data(n);
	getch();
}
*/
// deleted struct in c programming use function
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};struct employee em[20];

void input_Data(int n)
{
	float sa;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
}
void output_Data(int n)
{
	for(int i=0;i<n;i++)
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	
}
void deleted (int &n)
{
	char dname[20];
	printf("Enter name to delete=");
	fflush(stdin);gets(dname);
	for( int i=0;i<n;i++)
		if(strcmpi(em[i].name,dname)==0)
		{
			for(int j=i;j<n;j++ )
			em[j]=em[j+1];
			n--;
		}
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor delete\n");
	output_Data(n);
	deleted(n);
	printf("\noutput data After delete\n");
	output_Data(n);
	getch();
}*/

// search struct in c programming use function

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};struct employee em[20];

void input_Data(int n)
{
	float sa;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(em[i].id);
		printf("Enter name=");fflush(stdin);gets(em[i].name);
		printf("Enter sex=");scanf("%c",&em[i].sex);
		printf("Enter salary=");scanf("%f",&sa);
		em[i].salary=sa;
	}
		for(i=0;i<n;i++)
	{
		if(em[i].salary<250)
			em[i].tax=em[i].salary*0.05;
		else if(em[i].salary<500)
			em[i].tax=em[i].salary*0.09;
		else
			em[i].tax=em[i].salary*0.12;
			em[i].total=em[i].salary-em[i].tax;
	}
}
void output_Data(int n)
{
	for(int i=0;i<n;i++)
		printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
	
}
void search (int &n)
{
	char sname[20];
	int k=0;
	printf("Enter name Search=");
	fflush(stdin);gets(sname);
	for( int i=0;i<n;i++)
		if(strcmpi(em[i].name,sname)==0)
		{
			k=k+1;
			printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary,em[i].tax,em[i].total);
		}
		if(k==0)
		printf("Search not found");
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor Search\n");
	output_Data(n);
	search(n);
	getch();
}
*/
// pointer strct in c programming
/*
#include<stdio.h>
#include<conio.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary ,tax,total;
};
	struct employee emp[20];
	struct employee *ptr;
int main(){
	float sa;
	int i,n;
	ptr=emp;
	printf("\n input data ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(ptr->id);
		printf("Enter name=");fflush(stdin);gets(ptr->name);
		printf("Enter sex=");scanf("%c",&ptr->sex);
		printf("Enter salary=");scanf("%f",&sa);
		ptr->salary=sa;
		if(ptr->salary<250)
			ptr->tax=ptr->salary*0.05;
		else if(ptr->salary<500)
			ptr->tax=ptr->salary*0.09;
		else
			ptr->tax=ptr->salary*0.12;
			ptr->total=ptr->salary - ptr->tax;
			ptr++;
	}
	ptr=emp;
	printf("\n output data\n");
	for(i=0;i<n;i++)
	{
	printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sex,(ptr+i)->salary,(ptr+i)->tax,(ptr+i)->total);
	}
	
	getch();
}
*/

// Search pointer struct use function in c programming

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
	struct employee emp[20];
	struct employee *ptr;
void input_Data(int n)
{
	float sa;
	ptr=emp;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(ptr->id);
		printf("Enter name=");fflush(stdin);gets(ptr->name);
		printf("Enter sex=");scanf("%c",&ptr->sex);
		printf("Enter salary=");scanf("%f",&sa);
		ptr->salary=sa;
		if(ptr->salary<250)
			ptr->tax=ptr->salary*0.05;
		else if(ptr->salary<500)
			ptr->tax=ptr->salary*0.09;
		else
			ptr->tax=ptr->salary*0.12;
			ptr->total=ptr->salary - ptr->tax;
			ptr++;
	}
}
void output_Data(int n)
{
	ptr=emp;
	for(int i=0;i<n;i++)
	{
	printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sex,(ptr+i)->salary,(ptr+i)->tax,(ptr+i)->total);
	}
}
void search (int &n)
{
	char sname[20];
	int k=0;
	printf("Enter name Search=");
	fflush(stdin);gets(sname);
	for( int i=0;i<n;i++)
		if(strcmpi((ptr+i)->name,sname)==0)
		{
			k=k+1;
			printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sex,(ptr+i)->salary,(ptr+i)->tax,(ptr+i)->total);
		}
		if(k==0)
		printf("Search not found");
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor Search\n");
	output_Data(n);
	search(n);
	getch();
}
*/
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
	struct employee emp[20];
	struct employee *ptr;
void input_Data(int n)
{
	float sa;
	ptr=emp;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(ptr->id);
		printf("Enter name=");fflush(stdin);gets(ptr->name);
		printf("Enter sex=");scanf("%c",&ptr->sex);
		printf("Enter salary=");scanf("%f",&sa);
		ptr->salary=sa;
		if(ptr->salary<250)
			ptr->tax=ptr->salary*0.05;
		else if(ptr->salary<500)
			ptr->tax=ptr->salary*0.09;
		else
			ptr->tax=ptr->salary*0.12;
			ptr->total=ptr->salary - ptr->tax;
			ptr++;
	}
}
void output_Data(int n)
{
	ptr=emp;
	for(int i=0;i<n;i++)
	{
	printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sex,(ptr+i)->salary,(ptr+i)->tax,(ptr+i)->total);
	}
}
void deleted (int &n)
{
	char dname[20];
	printf("Enter name deleted=");
	fflush(stdin);gets(dname);
	for( int i=0;i<n;i++)
		if(strcmpi((ptr+i)->name,dname)==0)
		{
			for(int j=i;j<n;j++)
			ptr[j]=ptr[j+1];
			n--;		
		}
		
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor deleted\n");
	output_Data(n);
	deleted(n);
	printf("\noutput data After deleted\n");
	output_Data(n);
	getch();
}
*/
// sort pointer struct use function in c programming
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char id[20];
	char name[20];
	char sex;
	float salary,tax,total;
};
	struct employee emp[20],temp;
	struct employee *ptr;
void input_Data(int n)
{
	float sa;
	ptr=emp;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(ptr->id);
		printf("Enter name=");fflush(stdin);gets(ptr->name);
		printf("Enter sex=");scanf("%c",&ptr->sex);
		printf("Enter salary=");scanf("%f",&sa);
		ptr->salary=sa;
		if(ptr->salary<250)
			ptr->tax=ptr->salary*0.05;
		else if(ptr->salary<500)
			ptr->tax=ptr->salary*0.09;
		else
			ptr->tax=ptr->salary*0.12;
			ptr->total=ptr->salary - ptr->tax;
			ptr++;
	}
}
void output_Data(int n)
{
	ptr=emp;
	for(int i=0;i<n;i++)
	{
	printf("%-12s %-15s %-4c %-12.2f %-12.2f %-12.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sex,(ptr+i)->salary,(ptr+i)->tax,(ptr+i)->total);
	}
}
void Sort (int &n)
{
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	   	if((ptr+i)->salary<(ptr+j)->salary)
		   {
		   	temp=ptr[i];
		   	ptr[i]=ptr[j];
		   	ptr[j]=temp;
		   }
}
int main(){
	int n;
	printf("Enter n=");scanf("%d",&n);
	input_Data(n);
	printf("\noutput data Befor Sort\n");
	output_Data(n);
	Sort(n);
	printf("\noutput data After Sort\n");
	output_Data(n);
	getch();
}
*/

//  how grade of student use struct in c programimng

/*
#include<stdio.h>
#include<conio.h>
struct score{
	int math;
	int physic;
	int C_pro;
	float avg;
	int rank;
};
struct score score[20],temp;
int main(){
	int n,i,j;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("student %d\n",i+1);
		printf("\t math=");scanf("%d",&score[i].math);
		printf("\t physic=");scanf("%d",&score[i].physic);
		printf("\t C_pro=");scanf("%d",&score[i].C_pro);
		score[i].avg=((score[i].math+score[i].physic+score[i].C_pro)/3.0);
	}
	for(i=0;i<n-1;i++)
     for(int j=i+1;j<n;j++)
		if(score[i].avg<score[j].avg)
			{
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
			}
	int k=1,count=0;
	score[0].rank=k;
	for(i=0;i<n-1;i++)
		{
			count++;
			if(score[i].avg==score[i+1].avg)
			score[i+1].rank=k;
			else
			{
				score[i+1].rank=count+1;
				k=count+1;
			}
		}
	printf("\noutput data of score student\n");
	for(i=0;i<n;i++)
		printf("%-4d %-4d %-4d %-6.2f %-6d\n",score[i].math,score[i].physic,score[i].C_pro,score[i].avg,score[i].rank);
	getch();
}
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int num[50],n;
    printf("Input n=");
	scanf("%d",&n);
    for (int i=0;i<n;i++)
	{
    printf("Enter an integer: ");
    scanf("%d", &num[i]);	
	}
    // true if num is perfectly divisible by 2
    for( int i=0;i<n;i++)
	{
	if(num[i] % 2 == 0)
        printf("%d is even.\n",num[i]);
        
    else
        printf(" %d*%d is odd.\n",num[i]);
			
	}  
    getch();
}
