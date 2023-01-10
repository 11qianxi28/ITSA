#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    
    if(month >= 3 && month <= 5) //month is 3~5
        printf("Spring\n");
    else if(month >= 6 && month <= 8) //month is 6~8
        printf("Summer\n");
    else if(month >= 9 && month <= 11) //month is 9~11
        printf("Autumn\n");
    else if(month >= 1 && month <= 12) //month is 12~2
        printf("Winter\n");
    
    return 0;
}

