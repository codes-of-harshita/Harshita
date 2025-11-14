#include <stdio.h>
void greetings()
{
    printf("Good morning!\n");
    greetings();
}
int main()
{
    /*printf("count down...\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    printf("blast off!");

    return 0;*/

   /* for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");

    }
    return 0;*/

    /*for(int i=0;i<=5;i++)
    {

    printf("%d\t",(1+1)^i);
    }

    return 0;*/
    greetings();
    return 0;
}
