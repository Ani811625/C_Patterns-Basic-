/*To print the following pattern:
 *  *  *  *  * 
 *  *  *  *
 *  *  *
 *  *
 *
 */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=((n+1)-i);j++)
        {
            printf(" * ");
        }
        printf("\n");
    }*/
    return 0;
}