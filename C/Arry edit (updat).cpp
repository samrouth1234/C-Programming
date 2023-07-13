//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//int main(){
//	char name[10][20],edit[20],newedit[20];
//	int i,n;
//	char ch;
//	printf("Enter n=");scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		printf("name[%d]=",i);fflush(stdin);gets(name[i]);
//	}
//	printf("\n output before updat\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s\n",name[i]);
//	}
//	do{
//		printf("\n Enter number to updat=");
//		scanf("%d",edit);
//		for(i=0;i<n;i++)
//		if(strcmpi(name[i],edit)==0)
//		{
//			printf("new updat=");
//			scanf("%s",&newedit);
//			strcpy(name[i],newedit);
//		}
//	}while(ch==13);
//	printf("\n output After updat\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%s",name[i]);
//	}
//	printf("Press Enter continue");
//	ch=getch();
//	return 0;
//}
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int array[100],position ,i,n,value;
//	printf("Enter number of elements in array\n");
//	scanf("%d",&n);
//	printf("Enter %d elements\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&array[i]);
//	}
//	printf("Enter the location where you wish to insert an elements\n");
//	scanf("%d",&position);
//	printf("Enter the value to insert \n");
//	scanf("%d",&value);
//	for(i=n-1;i>=position-1;i--)
//		array[i+1]=array[i];
//		array[position-1]=value;
//		printf("Resultant array is \n");
//		for(i=0;i<n;i++)
//		{
//			printf("%d\n",array[i]);
//		}
//		return 0;
//}
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}
