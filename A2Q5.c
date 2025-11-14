#include <stdio.h>
int main()
{
    int n,m;
    int i=1;

    printf("Enter n(>0): ");
    scanf("%d",&n);
    printf("Enter m(>0): \n");
    scanf("%d",&m);

    if(n==0||m==0)
    {
        printf("Invalid input!");
        return 0;
    }
    while(i<=n)
    {
        int j=1;
        printf("\n%d's table:\n",i);
        while(j<=m)
        {
            printf("%3d x %3d = %3d\n",i, j, i*j);
            j++;
        }
        i++;
    }
    return 0;
}
