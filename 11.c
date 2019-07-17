#include <stdio.h>
int main()
{
    int number, expo, result=1;
    scanf("%d %d", &number, &expo);
    while(expo!=0)
    {
        result*=number;
        expo--;
    }
    printf("%d", result);
    return 0;
}
