#include<stdio.h>
int main(void)
{
    int n,a,b;
    scanf("%d",&n);
    a = n % 16;
    b = n / 16;

    printf("%d",(a + b*10));
}