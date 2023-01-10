#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char input[1000][15];
    
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
        scanf("%s", input[i]);
    
    for(int i = 0; i < num; i++)
    {
        int check = 0;
        
        if(strlen(input[i]) != 4) //digit isn't equal to 4 is a failure input
            printf("Failure Input\n");
        else
        {
            for(int j = 0; j < 5; j++)
            {
                for(int k = 1; k < 4-j; k++)
                {
                    if(input[i][j] == input[i][j+k])
                        check++; //count the pair of same number
                }
            }
            if(check == 1) //only one pair is a good number
                printf("Yes\n");
            else printf("No\n"); 
        }
    }
    
    return 0;
}
