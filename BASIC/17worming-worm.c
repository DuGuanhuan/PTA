#include<stdio.h>
int main(void)
{
    int n,d,u,i,height = 0;
    scanf("%d %d %d",&n,&u,&d);
    for(i = 1;;i++)
    {
        if(i % 2 != 0)
            height += u;
        else
            height -= d;
        if(height >= n)
            break;
            
    }
        printf("%d",i);

    return 0;
}