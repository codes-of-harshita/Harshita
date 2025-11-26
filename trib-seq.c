#include <stdio.h>
int main()
{
    int n, a=0,b=1,c=1,next;
    printf("Enter number of terms:");
    scanf("%d",&n);
    if(1<=n)
        printf("%d\n",a);
    if(2<=n)
        printf("%d\n",b);
    if(3<=n)
        printf("%d\n",c);
        next=a+b+c;
        for(int i=3;i<=n;++i)
        {
            printf("%d\n",next);
            a=b;
            b=c;
            c=next;
            next=a+b+c;
        }
        return 0;
}
