#include <stdio.h>

void BubbleSort(float list[15]);

int main()
{
    float list[15];
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%f", &list[i]);
    }
    
    BubbleSort(list); //sorting th list
    printf("maximum:%.2f\n", list[9]); //print max
    printf("minimum:%.2f\n", list[0]); //print min
    
    return 0;
}

void BubbleSort(float list[15]) //bubble sort
{
    int temp;
    for(int i = 0; i <  10 - 1; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(list[j] > list[j+1])
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
