#include <stdio.h>

int main()
{
    float num[15] = {0};
    float med;
    
    for(int i = 0; i < 10; i++)
        scanf("%f", &num[i]);
    
    for(int i = 0; i < 10-1; i++) //bubble sort the list
    {
        for(int j = 0; j < 10-i-1; j++)
        {
           if(num[j+1] < num[j])
           {
               float temp = num[j+1];
               num[j+1] = num[j];
               num[j] = temp;
           }
        }
    }
    
    for(int i = 0; i < 10; i++) //print the list after sorting
    {
        printf("%.0f", num[i]);
        if(i != 9)
            printf(" ");
    }
    printf("\n");
    
    med = num[4]/2+num[5]/2; //count the median if the list
    printf("Median:%.2f\n", med);
    
    return 0;
}
