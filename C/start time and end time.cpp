#include<stdio.h>
#include<conio.h>
int main(){
	int st,et,total;
	printf("Enter start=");scanf("%d",&st);
	printf("Enter end time=");scanf("%d",&et);
	if(et>12)
		if(st>=12)
		  total=(et-st)*200;
		else
		  total=(12-st)*100+(et-12)*200;
	else
	    total=(et-st)*100;
	printf("total=%d",total);
	getch();
	
}
