#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    if(a>0)
    {
        if(a%2==0)
        printf("Even");
        else 
        printf("Odd");
    }
    else
    printf("Invalid");
    return 0;
}
