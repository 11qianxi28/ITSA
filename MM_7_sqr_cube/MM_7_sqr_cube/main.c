#include <stdio.h>

int main()
{
    int num;
    
    while(scanf("%d", &num) != EOF)
    {
        printf("%d %d %d\n", num, num*num, num*num*num); //print number, the square of number and the cube of number
    }
    return 0;
}
