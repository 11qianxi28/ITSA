#include <stdio.h>

int main()
{
    int price;
    
    scanf("%d", &price);
    
    printf("NT10=%d\n", price/10); //the number of 10 coins
    price = price % 10; //remaining price
    
    printf("NT5=%d\n", price/5); //the number of 5 coins
    price = price % 5; //remaining price
    
    printf("NT1=%d\n", price); //the number of 1 coins
    
    return 0;
}
