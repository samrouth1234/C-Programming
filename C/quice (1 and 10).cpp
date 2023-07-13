#include<stdio.h>
#include<conio.h>
int main(){
	int r,c;
	r=1;
	while (r<=10){
		c=1;
		while(c<=10){
			printf("%d*%d=%d\n",r,c,r*c);
			c++;
		}
		r++;
		printf("\n");
	}
	getch();
}
