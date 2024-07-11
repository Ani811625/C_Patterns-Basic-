/*To print the following the following pattern:
 1  2  3  4 
 1  2  3
 1  2
 1
 */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}