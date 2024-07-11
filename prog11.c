/*To print the following pattern:
    *
    *
* * * * *
    *
    *
*/
#include<stdio.h>
int main()
{
    int i,j,n,a,k;
    printf("Enter the number of lines required remembering that the total number of lines must be odd:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==(n+1)/2 || i==(n+1)/2)
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
    return 0;
}