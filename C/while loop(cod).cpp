#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	i=100;
	while(!kbhit())
	//while(i>=1)
	{
		printf("%4d",i);
		i=i-1;
	}
	getch();
}
