#include <stdio.h>

void towerofhanoi(int n, char fromrod, char torod, char auxrod)
{
    if (n==0)
    {
        return;
    }
    towerofhanoi(n-1, fromrod, auxrod, torod);
    printf("Move disk %d from %c to %c\n",n,fromrod,torod);
    towerofhanoi(n-1, auxrod, torod, fromrod);
}
int main()
{
    int N;
    printf("Enter number of disks:");
    scanf("%d",&N);
    towerofhanoi(N,'A','C','B');
    return 0;
}
