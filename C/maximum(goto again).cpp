#include<stdio.h>
#include<iostream>
#include<conio.h>
int main(){
	int a,b,max;
	char ch;
	again:
		system("cls");
		printf("Enter a=");scanf("%d",&a);
		printf("Enter b=");scanf("%d",&b);
	if(a>b)
		max=a;
	else
		max=b;
		printf("Maximum(a,b)=%d\n",max);
		printf("\n Press Enter to continue:");
		ch=getch();
		if(ch=13);
		goto again;
		return 0;
	
}
