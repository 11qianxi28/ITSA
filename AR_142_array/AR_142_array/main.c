#include <stdio.h>

int main()
{
    int m, n;
    int sum = 0;
    int square;
    
    scanf("%d %d", &m, &n);
    
    for(int i = 1; i <= m; i++)
    {
        square = i*i; //count i squared, i is from 1 to m
        if(!(square%n)) //i squared is divisible by n
            sum += square; //sum of squared
    }
    
    printf("%d\n", sum);
    
    return 0;
}
