#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a=1;
    printf("Enter the number of lines and remember to obtain diamond shape no.of lines must be odd:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=(n+1)/2)
        {
            for(k=1;k<=n-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=a;j++)
            {
                printf("*");
            }
             a=a+2;
        }
        else if(i>(n+1)/2) 
        {
            for(l=1;l<=i-((n+1)/2);l++)
            {
                printf(" ");
            }
            for(m=1;m<=j-2;m++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

}