#include<stdio.h>
#include<conio.h>
int main(){
	int r,i,k;
	for(r=1;r<=5;r++){
		for(i=r;i<=5;i++){
			printf(" ");
			}
			for(k=1;k<=r;k++){
				printf("*");
		}
		printf("\n");
	}
	getch();
}
