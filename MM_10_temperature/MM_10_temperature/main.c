#include <stdio.h>

int main()
{
    double c = 0.0;
    
    while(scanf("%lf", &c) != EOF)
    {
        double f;
        f = c*9/5+32; //celsius transform to fahrenheit
        f = (int)(f*10+0.5)/10.0; //rounding
        printf("%0.1f\n", f);
    }
    
    return 0;
}
