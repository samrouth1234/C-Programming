#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,min;
	printf("ENETER THE THREE VALUE:");
	scanf("%d %d %d",&a,&b,&c);
	min=a;
	if(min>b)
	{
		min=b;
	}
	if(min>c)
	{
	min=c;	
	}
	printf("Minimum Number is =%d",min);
	return 0;
}
