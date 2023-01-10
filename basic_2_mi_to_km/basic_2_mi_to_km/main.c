#include <stdio.h>

int main()
{
    int mile;
    double km;
    
    while(scanf("%d", &mile) != EOF)
    {
        km = 1.6*mile; //transform km to mile
        printf("%.1f\n", km);
    }
    
    return 0;
}
