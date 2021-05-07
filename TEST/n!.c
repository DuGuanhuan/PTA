#include<stdio.h>
int main(void)
{
    int n,i,result = 1;
    printf("enter a number please.\n");
    scanf("%d",&n);

    for(i = 1;i <= n;i++)
    {
        result *= i;
    }
    printf("result = %d\n",result);
    return 0;
}