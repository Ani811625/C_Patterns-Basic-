#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=(65-1+i);j>=65;j--)
        {
           
            printf("%c",(char)j);
            
        }
        printf("\n");
    }
}