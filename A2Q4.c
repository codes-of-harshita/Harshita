#include <stdio.h>
int main()
{
    int n,count=1;
    printf("Enter n: ");
    scanf("%d",&n);

    while(count<=n)
    {
    if(count%2!=0)
    {
        printf("%d\n",count);
    }
    count++;
    }
    return 0;
}
