#include<stdio.h>
//#include<iostream>
#include<conio.h>
//#include<ctype.h>
//int main(){
	// discuont
	/*int qty;
	float price;
	float amount,dis,total;
	printf("Enter qty=");
	scanf("%d",&qty);
	printf("Enter price=");
	scanf("%f",&price);
	amount=qty*price;
	dis=price-0.05;
	total=amount-dis;
	printf("%4d %10.2f %10.2f %10.2f %10.2f ",qty,price,amount,dis,total);
	
	// salary tax
	
	int id;
	char name[20];
	char sex;
	float salary,tax,amount;
	printf("Enter id=");
	scanf("%d",&id);
	printf("Enter name=");
	fflush(stdin);gets(name);
	printf("Enter sex=");
	scanf("%c",&sex);
	printf("Enter salary=");
	scanf("%f",&salary);
	if(salary<=200)
	tax=salary*0.05;
	if(salary>200&&salary<=700)
	tax=salary*0.07;
	if(salary>700&&salary<=1000)
	tax=salary*0.1;
	amount=salary-tax;
	printf("%4d %15s %4c %10.2f %10.2f   ",id,name,sex,salary,amount);
	int a,b,c,max;//maximum(a b c) uesd goto again
	char ch;
	again:
		system("cls");
		printf("Enter a=");scanf("%d",&a);
		printf("Enter b=");scanf("%d",&b);
		printf("Enter c=");scanf("%d",&c);
		if(a>b&&a>c)
		max=a;
		else if(b>c)
		max=b;
		else 
		max=c;
		printf("Maximum(a b c)=%d",max);
		printf("\npress Enter to continue:");
		ch=getch();
		if(ch=13)
		goto again;
		return 0;
	int a,b,sum,max,min;
	char ch,ch1;
	again:
		system("cls");
		printf("press l for sum\n");
		printf("press k for max\n");
		printf("press m for min\n");
		ch=getch();
		switch(ch){
			case'l':printf("Enter a=");scanf("%d",&a);
					printf("Enter b=");scanf("%d",&b);
					sum=a+b;
					printf("sum(a+b)=%d",sum);
					break;
			case'k':printf("Enter a=");scanf("%d",&a);
					printf("Enter b=");scanf("%d",&b);
					if(a>b)
					max=a;
					else
					max=b;
					printf("Maximum(a b)=%d",max);
					break;
			case'm':printf("Enter a=");scanf("%d",&a);
					printf("Enter b=");scanf("%d",&b);
					if(a>b)
					min=b;
					else
					max=a;
					printf("Minimum(a b)=%d",min);
					break;
			default:printf("please try again:");
			
		}
	  	printf("\npress Enter to continue:");
	  	ch1=getch();
	  	if(ch=13)
	  	goto again;
	  	float rate,dollar,riel;
	  	char ch,ch1;
	  	do{
	  		system("cls");
	  		printf("press l change dollar to riel\n");
	  		printf("press k change riel to dolar\n");
	  		ch=tolower(getch());
	  		switch(ch){
	  			case'l':printf("Enter dollar=");
	  					scanf("%f",&dollar);
	  					printf("Enter rate=");
	  					scanf("%f",&rate);
	  					riel=dollar*rate;
	  					printf("Riel=%f",riel);
	  					break;
	  			case'k':printf("Enter riel=");
	  					scanf("%f",&riel);
	  					printf("Enter rate=");
	  					scanf("%f",&rate);
	  					dollar=riel/rate;
	  					printf("Dollar=%f",dollar);
	  					break;
			  }
			  printf("\npress Enter to continue:");
			  ch1=getch();
		  }while(ch1==13);*/
		 /* float average(float math ,float kh,float eng )
		  {
		  	return (math+kh+eng)/3;
		  }
		  int main(){
		  	float math, kh, eng;
		  	float av;
		    printf("Enter math=");scanf("%f",&math);
		  	printf("Enter kh=");scanf("%f",&kh);
		  	printf("Enter eng=");scanf("%f",&eng);
		  	av=average(math,kh,eng);
		  	printf("Average=%2f",av);
		  	getch();
		  }
		  
//	  	getch();
//}
