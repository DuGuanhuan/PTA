#include<stdio.h>
int main(void)
{
    double x,y;
    scanf("%lf,%lf",&x,&y);
    if(x < 15)
    {
        y = (4*x) / 3;
    }
    else
    {
        y = 2.5 * x - 17.5;
    }
    printf("%.2lf",y);

    return 0;
}