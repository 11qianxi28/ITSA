#include <stdio.h>

int main()
{
    int col, row;
    int matrix[100][100];
    
    while(scanf("%d %d", &col, &row) != EOF)
    {
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                printf("%d", matrix[j][i]); //reverse print
                if(j != (col-1))
                    printf(" "); //print blank
            }
            printf("\n");
        }
    }
    
    return 0;
}
