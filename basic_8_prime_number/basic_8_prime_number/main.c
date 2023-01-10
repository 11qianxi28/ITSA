#include <stdio.h>
#include <math.h>

void Prime(int num);

int main()
{
    int input;
    
    while((scanf("%d", &input)) != EOF)
        Prime(input);
    
    return 0;
}

void Prime(int num) //check the number is prime or not
{
    for(int i = 2; i <= num; i++)
    {
        if((num%i) == 0)
        {
            if(num == i) //num is divided by itself
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }
}

