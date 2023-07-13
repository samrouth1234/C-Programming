#include<stdio.h>
#include<conio.h>
int maximum(int a,int b,int c);
int main(){
	int a,b,c,max;
	printf("Enter a=");scanf("%d",&a);
	printf("Enter b=");scanf("%d",&b);
	printf("Enter c=");scanf("%d",&c);
	max=maximum(a,b,c);
	printf("Maximum(a b c)=%d",max);
	getch();
}
int maximum(int a,int b,int c) 
{
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
	
}

