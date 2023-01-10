#include <stdio.h>

int main()
{
    int year;
    
    while(scanf("%d", &year) != EOF)
    {
        if(!(year%4)) //multiple of 4
        {
            if(!(year%100)) //multiple of 100
            {
                if(!(year%400))
                    printf("Bissextile Year\n"); //multiple of 400
                else
                    printf("Common Year\n"); //multiple of 100
            }
            else
                printf("Bissextile Year\n"); //multiple of 4
        }
        else
            printf("Common Year\n"); //isn't a multiple of 4
    }
    
    return 0;
}
