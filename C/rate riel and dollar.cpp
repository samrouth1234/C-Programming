#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	float rate,dollar,riel;
	char ch,ch1;
	do{
		printf("Press d change dollar to riel\n");
		printf("Press r change riel to dollar\n");
		ch=tolower(getch());
		switch(ch){
			case'd'	:printf("Enter dollar=");
					scanf("%2f",&dollar);
					printf("Enter rate=");
					scanf("%2f",&rate);
					riel=dollar*rate;
					printf("Riel =%2f",riel);
					break;
			case'r'	:printf("Enter riel=");
					scanf("%2f",&riel);
					printf("Enter rate=");
					scanf("%2f",&rate);
					dollar=rate/rate;
					printf("dollar =%2f",dollar);
					break;	
		}
		printf("\npless Enter to continue");
		ch1=getch();
	}while(ch1==13);
	getch();
	
}
