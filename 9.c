#include<stdio.h>
int main()
{
int a[10], n, k, result=0;
scanf("%d %d", &n, &k);
for(int i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
for(int i=0; i<k; i++)
{
result = result + a[i];
}
printf ("%d", result);
return 0;
}
