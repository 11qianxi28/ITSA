#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    
    while(scanf("%s", str) != EOF)
    {
        unsigned long l = strlen(str);
        int count = 0; //the pair of the same string
        int mid = l/2; //middle
        
        if(l%2) //lengh of str is odd
        {
            for(int i = 1; i <= mid; i++)
            {
                if(str[mid-i] == str[mid+i])
                    count++;
            }
        }
        else //lengh of str is even
        {
            for(int i = 0; i <mid; i++)
            {
                if(str[i] == str[l-1-i])
                    count++;
            }
        }
        
        if(count == mid)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
