#include <stdio.h>

int main()
{
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    printf("%d+%d=%d\n", num1, num2, num1+num2); //sum
    printf("%d*%d=%d\n", num1, num2, num1*num2); //product
    printf("%d-%d=%d\n", num1, num2, num1-num2); //remainder
    
    if(num1%num2 >= 0) //remainder greater than 0
        printf("%d/%d=%d...%d\n", num1, num2, num1/num2, num1%num2); //quotient and remainder
    else //remainder less than 0
    {
        printf("%d/%d=%d...%d\n", num1, num2, num1/num2-1, num1%num2+num2); //quotient and remainder
    }
    
    return 0;
}
