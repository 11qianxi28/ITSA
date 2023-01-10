#include <stdio.h>

int main()
{
    float up, down, height;
    while(scanf("%f %f %f", &up, &down, &height) != EOF)
    {
        printf("Trapezoid area:%.1f\n", (up+down)*height/2); //calculate and print the area of trapezoidal
    }
    return 0;
}
