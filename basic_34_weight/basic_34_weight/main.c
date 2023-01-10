#include <stdio.h>

int main()
{
    int height, gender;
    double weight;
    
    while(scanf("%d %d", &height, &gender) != EOF)
    {
        if(gender == 1) //male
        {
            weight = (height-80) * 0.7;
            printf("%.1f\n", weight);
        }
        else //female
        {
            weight = (height-70) * 0.6;
            printf("%.1f\n", weight);
        }
    }
    
    return 0;
}
