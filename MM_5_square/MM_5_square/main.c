#include <stdio.h>

int main()
{
    double side;
    
    while(scanf("%lf", &side) != EOF)
    {
        double area;
        area = side * side; //square area
        area = (int)(area*10+0.5)/10.0; //rounding the number 
        printf("%0.1f\n", area);
    }
    
    return 0;
}
