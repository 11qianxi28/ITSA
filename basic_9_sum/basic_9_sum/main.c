#include <stdio.h>

int main()
{
    int n;
    
    while(scanf("%d", &n) != EOF)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i%3 == 0) //i is divided by 3
                sum += i; 
        }
        
        printf("%d\n", sum);
    }
    return 0;
}
