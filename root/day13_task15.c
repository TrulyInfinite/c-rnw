#include<stdio.h>

main()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = a; b>=1; b--)   
        {
            if(b%2==1)
            {
            printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}