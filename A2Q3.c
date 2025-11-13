#include <stdio.h>
int main()
{
    int count,n;
    printf("Enter n: ");
    scanf("%d",&n);

    count=1;
    start:
        printf("num: %4d      square: %4d       cube: %4d\n",count,(count*count),(count*count*count));
        count++;

        if(count<=n)
        {
            goto start;
        }
        return 0;
}
