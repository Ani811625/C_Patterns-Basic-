/*To print the following pattern:
   1
  123
 12345
1234567
*/
#include<stdio.h>
int main()
{
    int i,j,k,n,a=1;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(k=1;k<=n-i;k++)
      {
        printf(" ");
      }
      for(j=1;j<=a;j++)
      {
        printf("%d",j);
      }
      a=a+2;
      printf("\n");
    }
}