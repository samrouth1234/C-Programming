#include<stdio.h>
#include<conio.h>
int main(){
	int r,c;
	for(r=1;r<=9;r++){
		for(c=1;c<=r;c++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
