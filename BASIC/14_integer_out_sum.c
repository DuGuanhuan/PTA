#include<stdio.h>
int main(void)
{
    int m,n,i;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d",&m,&n);

    for(i = m;i <= n;i++)
    {
        printf("%5d",i);
        cnt++;
        sum += i;
        if(cnt % 5 == 0)
            printf("\n");
    }
    printf("\n");
    printf("Sum = %d",sum);

    return 0;
}