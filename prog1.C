/*To print the following pattern:
  * * * * 
  * * * *
  * * * *
  * * * *
  * * * *  
*/
#include<stdio.h>
int main()
{
    int i,j,n,p;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    printf("Enter the number of '*' in each lines:\n");
    scanf("%d",&p);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=p;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}