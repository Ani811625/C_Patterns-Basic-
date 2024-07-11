/*To print the following pattern:
* * * * * *
*         *
*         *
* * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j,n,a,k;
    printf("Enter the number of lines required remembering that the total number of lines must be even:\n");
    scanf("%d",&n);
      printf("Enter the number of '*' required in each lines:\n");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
             for(j=1;j<=a;j++)
        {
           printf("*"); 
        }
        }
        else
        {
            for(j=1;j<=a;j++)
            {
                if(j==1 || j==a)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}