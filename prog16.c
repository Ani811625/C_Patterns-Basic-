/*To print the following pattern :
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    int i,j,n,a=1;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
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
   // printf("\n");
}
/*To print the following pattern :
* * * * *
  * * * *
    * * *
      * *
        * 
/*#include<stdio.h>
int main()
{
    int i,j,n,a=1;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
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
   // printf("\n");
}*/
