/*To print the following pattern:
*       *
  *   * 
    *
  *   *
*       *
*/
#include<stdio.h>
int main()
{
    int i,j,n,a;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
   // printf("Enter the number of items in each ")
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        if(i==j || i+j==n+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
   }
}