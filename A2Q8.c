#include <stdio.h>
int main()
{
    int n,AP,a,d;
    printf("Enter number of terms required:");
    scanf("%d",&n);
    printf("Enter the first term:");
    scanf("%d",&a);
    printf("Enter difference:");
    scanf("%d",&d);

    for(int i=1;i<=n;i++)
    {
        AP=a+(i-1)*d;
        printf("%d\n",AP);
    }
    return 0;
}
