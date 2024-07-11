/*To print the following pattern:
 A  B  C  D  E  F 
 A  B  C  D  E  F
 A  B  C  D  E  F
 A  B  C  D  E  F
 A  B  C  D  E  F
 A  B  C  D  E  F
 */
#include<stdio.h>
int main()
{
    int n,i;
    int j;
    printf("Enter the number of lines required:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //int a=65;
        for(j=65;j<65+n;j++)
        {
            printf(" %c ",(char)j);
            //a=a+1;
        }
        printf("\n");
    }
    return 0;
}