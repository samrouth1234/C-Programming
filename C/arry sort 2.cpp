#include<stdio.h>
#include<conio.h>
int main(){
	int age[10],temp;
	int i,j,n;
	printf("Enter n=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("age[%d]=",i);
		scanf("%d",age[i]);
	}
	printf("\n output data Before sort\n");
		for(i=0;i<n;i++)
			printf("%4d\t",age[i]);
				for(i=0;i=n-1;i++)
					for(j=i+1;j<n;j++)
						if(age[i]<age[j])
							{
								temp=age[i];
								age[i]=age[j];
								age[j]=temp;
							}
				printf("\n output data after sort\n");
					for(i=0;i<n;i++)
	{
		printf("%4d\t",age[i]);
	}
	getch();
}
