#include<stdio.h>
#include<conio.h>
int main(){
	int x[10][10];//row[10]andcol[10]
	int r,c,row,col,max;
	printf("Enter row=");scanf("%d",&row);
	printf("Enter col=");scanf("%d",&col);
	for(r=0;r<row;r++)//row
		for(c=0;c<col;c++)//col
		{
			printf("x[%d][%d]=",r,c);
			scanf("%d",&x[r][c]);
		}
	printf("\noutput array\n");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
			printf("%4d",x[r][c]);
			printf("\n");
	}
	max=x[0][0];//Number maximum in dimension
	for(r=0;r<row;r++)
		for(c=0;c<col;c++)
		if(x[r][c]>max)
		max=x[r][c];
		printf("Maximum=%d",max);
			
	getch();
}
