#include<stdio.h>
#include<conio.h>
int main(){
	
	int x[20],updat;
	int i,n,k,m;
	char ch;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
	printf("\noutput before updat\n");
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
	do{
		printf("\nEnter the index to be updated:");
		scanf("%d",updat);
		for(i=0;i<n;i++)
			if(x[i]==updat)
			{		
				printf("Enter the index to be updated:");
				scanf("%d",&k);
				printf("Enter the new element:");
				scanf("%d",&m);
				x[k]=m;
			}
		printf("Press Enter continue");
		ch=getch();
	}while(ch==13);
  printf("\noutput After updat\n");
  for(i=0;i<n;i++)
	printf("%5d",x[i]);
  getch();
}
