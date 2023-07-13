// write deta in to file in c programming
/*
#include<stdio.h>
#include<conio.h>
int main(){
	FILE*fp;
	int id;
	float score;
	char name[20];
	fp=fopen("D:\\Learn c\\E4data.txt","w");
	printf("Enter id=");
	scanf("%d",&id);
	printf("Enter name=");
	fflush(stdin);gets(name);
	printf("Enter score=");
	scanf("%f",&score);
	fprintf(fp,"\n%d\t %s\t %.2f",id,name,score);
	fclose(fp);
}
*/

/*
// write file of form struct 

#include<stdio.h>
#include<conio.h>
int main(){
	FILE*fp;
	struct student{
	char id[20];
	char name[20];
	float score;
	};
	struct student stu[20];
	int n,i;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	fp=fopen("D:\\Learn c\\E4data.txt","w");
	printf("Enter id=");fflush(stdin);
	gets(stu[i].id);
	printf("Enter name=");
	fflush(stdin);gets(stu[i].name);
	printf("Enter score=");
	scanf("%f",&stu[i].score);
	}
	for(i=0;i<n;i++)
	fprintf(fp,"\n%s\t %s\t %.2f\n",stu[i].id,stu[i].name,stu[i].score);
	fclose(fp);
}
*/
// write and read file in text.text
/*
#include<stdio.h>
#include<conio.h>
int main(){
	FILE*fp;
	struct student{
	char id[20];
	char name[20];
	float score;
	};
	struct student stu[20];
	int n,i;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	fp=fopen("D:\\Learn c\\E5data.txt","w");
	printf("Enter id=");fflush(stdin);
	gets(stu[i].id);
	printf("Enter name=");
	fflush(stdin);gets(stu[i].name);
	printf("Enter score=");
	scanf("%f",&stu[i].score);
	}
	for(i=0;i<n;i++)
	fprintf(fp,"\n%s\t %s\t %.2f\n",stu[i].id,stu[i].name,stu[i].score);
	fclose(fp);
	fp=fopen("D:\\Learn c\\E5data.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(feof(fp))
		break;
		printf("%c",ch);
	}
	fclose(fp);
}
*/
// write and read  of binary file
/*
#include<stdio.h>
#include<conio.h>
typedef struct{
	char id [20];
	char name[20];
	int age;
	float score;
}student;
int main(){
	student stu[20];
	FILE*fp;
	fp=fopen("D:\\Learn c\\E7data.bin","wb");
	int i,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(stu[i].id);
		printf("Enter name=");fflush(stdin);gets(stu[i].name);
		printf("Enter age=");scanf("%d",&stu[i].age);
		printf("Enter score=");scanf("%f",&stu[i].score);
		
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	student st;
	fp=fopen("D:\\Learn c\\E7data.bin","rb");
	
		while(fread(&st,sizeof(student),1,fp)==1)
		printf("%s\t %s\t %d\t %.2f\n",st.id,st.name,st.age,st.score);
	fclose(fp);
	getch();
	
}
*/
// read file binary After search data
/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char id [20];
	char name[20];
	int age;
	float score;
}student;
int main(){
	student st;
	FILE*fp;
	fp=fopen("D:\\Learn c\\E7data.bin","rb");
	int i,n,k=0;
	char sname[20];
	if(fp==NULL)
	{
		printf("File no found");
		exit(1);
	}
	printf("Enter name to search=");fflush(stdin);gets(sname);
	while(fread(&st,sizeof(student),1,fp)!=NULL)
	{
		if(strcmpi(st.name,sname)==0)
		{
		k=k+1;
		printf("%s\t %s\t %d\t %.2f\n",st.id,st.name,st.age,st.score);
		}
	if(k==0)
		printf("search not found\n");
	}
	fclose(fp);
	getch();
}
*/
//sort file in memory in c programming
/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char id [20];
	char name[20];
	int age;
	float score;
}student;
int main(){
	student st,stu[10],temp;
	FILE*fp;
	fp=fopen("D:\\Learn c\\E7data.bin","rb");
	int i,n=0;
	if(fp==NULL)
	{
		printf("File no found");
		exit(1);
	}
	i=0;
	while(fread(&st,sizeof(student),1,fp)!=NULL)
	{
		stu[i]=st;
		printf("%s\t %s\t %d\t %.2f\n",st.id,st.name,st.age,st.score);
		n++;
		i++;
	}
	for(i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if( stu[i].score > stu[j].score)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}	
	printf("\n output data After sort\n");
	for(i=0;i<n;i++)
		printf("%s\t %s\t %d\t %.2f\n",stu[i].id,stu[i].name,stu[i].age,stu[i].score);
	fclose(fp);
	getch();
}

*/
// copy file in c programming
/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct {
char id[20];
char name[20];
int age;
float score;
}student;
int main(){
	student stu[20];
	FILE*fp,*fp1;
	int n,i;
	fp=fopen("D:\\Learn c\\student1.txt","wb");
	fp1=fopen("D:\\Learn c\\student2.txt","wb");
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(stu[i].id);
		printf("Enter name=");fflush(stdin);gets(stu[i].name);
		printf("Enter age=");scanf("%d",&stu[i].age);
		printf("Enter score=");scanf("%f",&stu[i].score);
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	fp=fopen("D:\\Learn c\\student1.txt","rb");
	for(i=0;i<n;i++)
	{
		fread(&stu[i],sizeof(student),1,fp);
		fwrite(&stu[i],sizeof(student),1,fp1);
	}
	fclose(fp);
	fp1=fopen("D:\\Learn c\\student2.txt","rb");
	for(i=0;i<n;i++)
	{
		fread(&stu[i],sizeof(student),1,fp1);
		printf("%s\t %s\t %d\t %.2f\n",stu[i].id,stu[i].name,stu[i].age,stu[i].score);
	}
	fclose(fp1);
	getch();
}
*/

// delete data in file in c programming

/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
char id[20];
char name[20];
int age;
float score;
}student;
int main(){
	student stu[20],st;
	FILE*fp,*fp1;
	int n,i;
	char dname[10];
	fp=fopen("D:\\Learn c\\student1.txt","wb");
	fp1=fopen("D:\\Learn c\\student2.txt","wb");
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(stu[i].id);
		printf("Enter name=");fflush(stdin);gets(stu[i].name);
		printf("Enter age=");scanf("%d",&stu[i].age);
		printf("Enter score=");scanf("%f",&stu[i].score);
		fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);
	fp=fopen("D:\\Learn c\\student1.txt","rb");
	printf("Enter name to delete=");fflush(stdin);
	gets(dname);
	for(i=0;i<n;i++)
	{
		fread(&stu[i],sizeof(student),1,fp);
		if(strcmp(stu[i].name,dname)!=0)
		{
			fwrite(&stu[i],sizeof(student),1,fp1);
		}
		
	}
	fclose(fp1);
	fp1=fopen("D:\\Learn c\\student2.txt","rb");
	while(fread(&st,sizeof(student),1,fp1))
	printf("%s\t %s\t %d\t %.2f\n",st.id,st.name,st.age,st.score);
	fclose(fp1);
	getch();
}
*/
// copy data by used condition
/*

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
char id[20];
char name[20];
char sex;
float score;
}people;
int main(){
	people stu[20],st;
	FILE*fp,*fp1,*fp2;
	int n,i;
	fp=fopen("D:\\Learn c\\people1.txt","wb");
	fp1=fopen("D:\\Learn c\\people femele 2.txt","wb");  //female
	fp2=fopen("D:\\Learn c\\people male 3.txt","wb");  // male
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");fflush(stdin);gets(stu[i].id);
		printf("Enter name=");fflush(stdin);gets(stu[i].name);
		printf("Enter sex=");scanf("%c",&stu[i].sex);
		printf("Enter score=");scanf("%f",&stu[i].score);
		fwrite(&stu[i],sizeof(people),1,fp);
	}
	fclose(fp);
	fp=fopen("D:\\Learn c\\student1.txt","rb");
	while(fread(&stu[i],sizeof(people),1,fp)!=NULL)
	{
		if(stu[i].sex=='f'||stu[i].sex=='F')
			fwrite(&stu[i],sizeof(people),1,fp1);		
		else
			fwrite(&stu[i],sizeof(people),1,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fp1=fopen("D:\\Learn c\\people2.txt","rb");
	while(fread(&st,sizeof(people),1,fp1))
	printf("%s\t %s\t %c\t %.2f\n",st.id,st.name,st.sex,st.score);
	fclose(fp1);
	getch();
}

