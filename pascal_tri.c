#include <stdio.h>
int main()
{
    int n,coef=1;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i==0||j==0)
            {
                coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;
            }

            printf("%d\t",coef);
        }
        printf("1\n");
    }
        return 0;
}
