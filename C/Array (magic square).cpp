#include<stdio.h>
#include<conio.h>
#define max 15
int main()
{
	int m[max][max]={0};
	int n,r,c,value;
	do
	{
		printf("input n");
		scanf("%d",&n);
    }while(!(0<n&&n<max)||n%2==0);
    r=0;
    c=n/2;
    for(value=1;value<=n*n;value++)
	{
		m[r][c]=value;
		if(value%n==0)r++;
		else
		{
			if(r==0) r=n-1;
			else r--;
			if(c==n-1) c=0;
			else c++;
		}
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		printf("%5d",m[r][c]);
		printf("\n");
	}
	getch();
}
