/*To print the following pattern
   A
  ABC
 ABCDE
ABCDEFG
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
      for(j=65;j<=65+a-1;j++)
      {
        printf("%c",(char)j);
      }
      a=a+2;
      printf("\n");
    }
}