#include<stdio.h>
#include<conio.h>
int main(){
	int st,et,pay;
	printf("Enter start=");scanf("%d",&st);
	printf("Enter end time=");scanf("%d",&et);
	if(et>12)
		if(st>=12)
		  pay=(et-st)*300;
		else
		  pay=(12-st)*200+(et-12)*300;
	else
		pay=(et-st)*200;
	printf("pay = %d",pay);
	getch();
		
}
