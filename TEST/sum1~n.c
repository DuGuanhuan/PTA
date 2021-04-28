#include<stdio.h>
int main(void)
{
    int i,n,num = 0;
    printf("you can enter a number now");     //user input
    scanf("%d",&n);

    for(i = 1;i <= n;i++)
    {
        num += i;                             //num change
    }

    printf("num = %d",num);

    return 0;
}