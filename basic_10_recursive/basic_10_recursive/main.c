#include <stdio.h>

int recursive(int var);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", recursive(n));
    return 0;
}

int recursive(int var)
{
    if(var == 0 | var == 1) //when n=0 or n=1, f(n)=n+1
        return var + 1;
    return recursive(var-1) + recursive(var/2); //when n>1, f(n)=f(n-1)+f(⌊n/2⌋)

}
