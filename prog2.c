/*To print the following pattern:
 1  2  3  4 
 1  2  3  4
 1  2  3  4
 1  2  3  4
 1  2  3  4
 */
#include<stdio.h>
int main()
{
    int i,j,n,p;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    printf("Enter the number of digits in each lines:\n");
    scanf("%d",&p);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}