/*#include<stdio.h>
#include<iostream>
#include<conio.h>
int main(){
	int a,b,max,min;
	char ch,ch1;
	again:
		system("cls");
		printf("Press s for max\n");
		printf("press m for min\n");
		ch=getch();
		switch(ch)
		{
		case's':	printf("Enter a=");scanf("%d",&a);
						printf("Enter b=");scanf("%d",&b);
						if(a>b)
						max=a;
						else
						max=b;
						printf("maximum=%d\n",max);
						break;
		case'm':	printf("Enter a=");scanf("%d",&a);
						printf("Enter b=");scanf("%d",&b);
						if(a>b)
						min=b;
						else
						min=a;
						printf("Minimum=%d\n",min);
						break;
		default:	printf("Press try again:");
		}
		printf("\npress Enter to continue: ");
		ch1=getch();
		if(ch1==13)
		goto again;
		getch();
		
}*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
int main(){
	int a,b,sum,mul;
	char ch,ch1;
	again:
		system("cls");
		printf("Press m for sum\n");
		printf("Press l for multi\n")
		ch=getch();
		switch(ch)
		{
			case'm':	printf("Enter a=");scanf("%d",&a);
						printf("Enter b=");scanf("%d",&b);
						sum=a+b;
						printf("sum=%d\n",sum);
						break;
			case'l':	printf("Enter a=");scanf("%d",&a);
						printf("Enter b=");scanf("%d",&b);
						mul=a*b;
						printf("multi=%d";mule);	
						break;
			default:	("Pleas try again:");
		}
						printf("\n press Enter to continue");
						ch1=gecth();
						if(ch1=13)
						goto again;
	getch();			
}






















