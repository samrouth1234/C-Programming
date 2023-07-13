#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
int main(){
	int i=1;
	while(1)
	{
		printf("%c=%d\t",i,i);
		i=i+1;
		if(kbhit())
		break;
		//exit(1);
		
	}
}
