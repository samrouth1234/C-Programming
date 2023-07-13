#include<stdio.h>
#include<conio.h>
int main(){
	int r,c;
	for(r=1;r<=9;r++){
		for(c=r;c<=9;c++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
