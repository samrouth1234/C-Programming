#include<stdio.h>
#include<iostream>
#include<conio.h>
int main(){
	int a,b,max,min,sum;
	char ch,ch1;
	again:
		system("cls");
		printf("Press l for max\n");
		printf("Press m for min\n");
		printf("Press k for sum\n");
		ch=getch();
		switch(ch){
			case'l':printf("Enter a=");scanf("%d",&a);
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
					max=b;
					else
					max=a;
					printf("Minimum(a b)=%d",max);
					break;
			case'k':printf("Enter a=");scanf("%d",&a);
					printf("Enter b=");scanf("%d",&b);
					sum=a+b;
					printf("sum(a+b)=%d",sum);
					break;		
			default :printf("please try again: ");
		}
		printf("\npress Enter to continue:");
		ch1=getch();
		if(ch1==13)
		  goto again;
		getch();
}
