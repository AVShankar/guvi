#include <stdio.h>
int main()
{
    int number, rev=0, temp;
    scanf("%d", &number);
    temp = number;
    while(temp!=0)
    {
        rev = rev * 10;
        rev = rev + (temp%10);
        temp = temp/10;
    }
    if(number==rev)
    printf("yes");
    else 
    printf("no");
    return 0;
}
