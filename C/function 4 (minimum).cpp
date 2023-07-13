#include<stdio.h>
#include<conio.h>
int minimum(int a,int b,int c)
{
	if(a<b&&a<c)
	return a;
	else if(b<c)
	return b;
	else
	return c;
}
int main(){
	int a,b,c,min;
	printf("Enter a=");scanf("%d",&a);
	printf("Enter b=");scanf("%d",&b);
	printf("Enter c=");scanf("%d",&c);
	min=minimum(a,b,c);
	printf("Minimum(a b c)=%d",min);
	getch();
}
