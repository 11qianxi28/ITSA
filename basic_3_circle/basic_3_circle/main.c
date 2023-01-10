#include <stdio.h>

int main()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if(x*x + y*y <= 10000) //point is inside the circle
        printf("inside\n");
    else printf("outside\n"); //point is outside the circle
    
    return 0;
}
