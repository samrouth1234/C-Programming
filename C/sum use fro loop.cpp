#include<stdio.h>
#include<conio.h>
int main(){
	int i,sum=0,n;//sum=2+4+6+......
	printf("Enter n=");scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
	sum+=i;
	}
	printf("2+4+6+...+n=%d\n",sum);
	getch();
}
