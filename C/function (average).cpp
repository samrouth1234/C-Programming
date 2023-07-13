#include<stdio.h>
#include<conio.h>
float average(float math, float kh, float eng) ;
int main(){
	float math,kh,eng;
	float av;
	printf("Enter math=");scanf("%f",&math);
	printf("Enter kh=");scanf("%f",&kh);
	printf("Enter eng=");scanf("%f",&eng);
	av=average(math,kh,eng);
	printf("Average=%10.2f",av);
	getch();
}
float average(float math,float kh,float eng)
{
	return(math+kh+eng)/3;
}
