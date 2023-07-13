#include<stdio.h>
int main(){
	int n;
	printf("Enter n:");scanf("%d",&n);
	int Sn=n*(n+1)*(2*n+1)/6;
	printf("Sn=%d",Sn);
	return 0;
}
