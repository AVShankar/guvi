#include<stdio.h>
int main()
{
int number, count;
scanf("%d", &number);
while(number!=0)
{
    count++;
    number=number/10;
}
printf("%d", count);
return 0;
}
