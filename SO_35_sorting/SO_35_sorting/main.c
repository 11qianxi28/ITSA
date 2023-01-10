#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    if(n < 95)
    {
        if(n < 56)
        {
            if(n < 23)
            {
                if(n < 9)
                {
                    if(n < 6)
                    {
                        if(n < 1)
                            printf("%d,1,6,9,23,56,95\n", n); //n<1
                        else
                            printf("1,%d,6,9,23,56,95\n", n); //1<n<6
                    }
                    else
                        printf("1,6,%d,9,23,56,95\n", n); //6<n<9
                }
                else
                    printf("1,6,9,%d,23,56,95\n", n); //9<n<23
            }
            else
                printf("1,6,9,23,%d,56,95\n", n); //23<n<56
        }
        else
            printf("1,6,9,23,56,%d,95\n", n); //56<n<95
    }
    else
        printf("1,6,9,23,56,95,%d\n", n); //n>95
    
    return 0;
}
