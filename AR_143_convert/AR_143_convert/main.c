#include <stdio.h>

int main()
{
    char letter[20];
    int i = 0;
    
    scanf("%s", letter);
    
    while(letter[i] != '\0')
    {
        printf("(%d)", letter[i] - 'a' ); //print the size of letter, a is 0
        i++;
    }
    printf("\n");
    
    return 0;
}
