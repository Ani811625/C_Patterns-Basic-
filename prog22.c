/*To print the following pattern:
   1
  121
 12321
1234321
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
      a++;
      if(i>=2 && i<=n)
      {
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
      }
      printf("\n");
    }
}