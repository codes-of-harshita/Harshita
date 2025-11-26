#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=(n/2)+1;i++)
     {
         for(int s=1;s<=n-i;s++)
         {
             printf(" \t");
         }
         for (int j=1;j<=2*i-1;j++)
         {
             printf("*\t");
         }
         printf("\n");
     }
    for(int i=n/2;i>=1;i--)
     {
         for(int s=1;s<=n-i;s++)
         {
             printf(" \t");
         }
         for (int j=1;j<=2*i-1;j++)
         {
             printf("*\t");
         }
         printf("\n");
     }
    return 0;
}
