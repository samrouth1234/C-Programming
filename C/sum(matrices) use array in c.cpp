/*#include<stdio.h>   
int main()  
{  
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Sum of entered matrices:\n");  
    for (c = 0; c < m; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  */
#include <stdio.h>
int main()
{
     int a[4][4],b[4][4],s[4][4],i,j;
     printf("Enter Elements of First 4*4 Matrix: \n\n");
     for(i=0;i<=3;i++)
          for(j=0;j<=3;j++)
          {
               scanf("%d",&a[i][j]);
          }
     printf("\nEnter Elements of Second 4*4 Matrix: \n\n");
     for(i=0;i<=3;i++)
          for(j=0;j<=3;j++)
          {
               scanf("%d",&b[i][j]);
          }
     for(i=0;i<=3;i++)
          for(j=0;j<=3;j++)
          {
               s[i][j]=a[i][j]+b[i][j];
          }
     printf("\nSum of Matrices :\n\n");
     for(i=0;i<=3;i++)
     {
          for(j=0;j<=3;j++)
          {
               printf("%d ",s[i][j]);
          }
     printf("\n");
     }
     return 0;
}
