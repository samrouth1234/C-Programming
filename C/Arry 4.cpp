#include<stdio.h>
#include<conio.h>
int main(){
	char Name[10][20];//average there (math+eng+kh)
	char sex[10];
	int age[10];
	float math[10],eng[10],kh[10];
	float avg[10];
	int n,i;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++){//input data 
		printf("Name=");fflush(stdin);gets(Name[i]);
		printf("sex=");scanf("%c",&sex[i]);
		printf("age=");scanf("%d",&age[i]);
		printf("math=");scanf("%f",&math[i]);
		printf("eng=");scanf("%f",&eng[i]);
		printf("kh=");scanf("%f",&kh[i]);
		avg[i]=(math[i]+eng[i]+kh[i])/3;
	}
	printf("\n output data\n");//output data
	for(i=0;i<n;i++){
	//	if(sex[i]=='f' && age[i]>=25 && avg[i]>=90);
		printf("%-15s %-4c %-4d %-12.2f %-12.2f %-12.2f %-12.2f\n",Name[i],sex[i],age[i],math[i],eng[i],kh[i],avg[i]);
	}
	getch();
}
