/*To print the following pattern:
     *
    ***
   *****
  *******
 *********
***********
*/
#include<stdio.h>
int main()
{
    int i,j,n,k,a=1;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a=a+2;
        printf("\n");
    }

}