#include<stdio.h>
#include<conio.h>
int main(){
	int r,c,k;
	for(r=1;r<=9;r++){
		for(k=1;k<=r;k++){
			printf(" ");
		}
		for(c=r;c<=9;c++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
