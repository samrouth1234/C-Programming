#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,max;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	if(a>b)
	max=a;
	if(a<b)
	max=b;
	printf("maximum(%d,%d)=%d",a,b,max);
	getch();
	
	
}
