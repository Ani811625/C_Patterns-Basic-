/*To print the following pattern :
 1 
 1  3
 1  3  5
 1  3  5  7
 1  3  5  7  9
 */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
   // int a=1;
    for(i=1;i<=n;i++)
    {
         int a=1;
        for(j=1;j<=i;j++)
        {
            printf(" %d ",a);
            a=a+2;
        }
        printf("\n");
    }
}