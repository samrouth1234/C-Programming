#include<stdio.h>
#include<conio.h>
int main(){
	int a[20];
	int i,n,pos,add;
	do{
		printf("Enter n=");
		scanf("%d",&n);
	}while(n<=0 || n>20);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\nPlease input an element u 1 2 add=");
	scanf("%d",&add);
	do{
		printf("\nWhich pos=");
		scanf("%d",&pos);
		}while(pos<0 || pos>n);
		n++;
		for(i=n-1;i>pos;i--)
		a[i]=a[i-1];
		
		a[i]=add;
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	getch();
	
}
