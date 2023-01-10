#include <stdio.h>

int main() {
    int a, b, r;
    
    scanf("%d %d", &b, &r);
    
    while(r) //eucliden algorithm
    {
        a = b;
        b = r;
        r = a % b;
    }
    
    printf("%d\n", b); //highest common factor
    
    return 0;
}
