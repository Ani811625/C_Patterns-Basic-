/*To print the following pattern:

   ****
  **** 
 ****  
****   
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no.of lines:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+(n-1);j++)
        {
            if(j>n+(n-i) || j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}