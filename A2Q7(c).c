#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1||i==j||i-j==2||j-i==2)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}
