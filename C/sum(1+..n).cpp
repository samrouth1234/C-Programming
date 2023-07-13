#include<stdio.h>
#include<conio.h>
int main(){
	int i,sum=0,n;
	printf("Enter n=");scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("%d + \b",i);
		i=i+1;
	}
	printf("\b = %d",sum);
	getch();
	
}
