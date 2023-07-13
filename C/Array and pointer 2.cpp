#include<stdio.h>
#include<conio.h>
int main()
{
/*	int i,n;
	float *p;
	printf("Enter n=");scanf("%d",&n);
	float *avg=new float[n];
	p=avg;
	for(i=0;i<n;i++)
	{
		printf("avg[%d]=",i);
		scanf("%f",(p+i));
	}
	printf("\n output array\n");
	for(i=0;i<n;i++)
	printf("%6.2f",avg[i]);
	
	p=&avg[n-1];
	printf("\n\noutput reverse order array\n");
	for(i=0;i<n;i++)
		printf("%6.2f",*(p-i));
		// How search maximum array and pointer
	float max=*p+0;
	for(i=1;i<n;i++)
		if(*(p-i)>max)
		max=*(p-i);
	printf("\n\nMax =%4.2f",max);
	getch();
*/
// minimum pointer and array
	int i,n;
	float *p;
	printf("Enter n=");scanf("%d",&n);
	float *avg=new float[n];
	p=&avg[n-1];
	for(i=0;i<n;i++)
	{
		printf("avg[%d]=",i);
		scanf("%f",(p-i));
	}
	printf("\n output array\n");//array
	for(i=0;i<n;i++)
	printf("%6.2f",avg[i]);
	
	p=&avg[n-1];
	printf("\n\noutput reverse order array\n");
	for(i=0;i<n;i++)
	{
		printf("%6.2f",*(p-i));
	}
		float min=*p+0;
	for(i=1;i<n;i++)
		if(*(p-i)<min)
		min=*(p-i);
	printf("\n\noutput valeu minimum =%4.2f\n",min);
	getch();
}
