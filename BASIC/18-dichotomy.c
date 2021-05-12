#include<stdio.h>
double f(double a,double b,double c,double d,double x);
int main(void)
{
    double a,b;
    double a3,a2,a1,a0;
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
    scanf("%lf %lf",&a,&b);
    
    if(f(a3,a2,a1,a0,a) == 0)
        printf("%.2lf",a);
    else if(f(a3,a2,a1,a0,b) == 0)
        printf("%.2lf",b);
    else
    {
        while((b - a) >= 0.1)
    {
        if(f(a3,a2,a1,a0,a) * f(a3,a2,a1,a0,b) < 0)
            {
                if(f(a3,a2,a1,a0,(a + b) / 2) == 0)
                    break;
                else if(f(a3,a2,a1,a0,((a + b) / 2)) * f(a3,a2,a1,a0,a) > 0)
                {
                    a = (a + b) / 2;
                    continue;
                }
                else if(f(a3,a2,a1,a0,((a + b) / 2)) * f(a3,a2,a1,a0,b) > 0)
                {
                    b = (a + b) / 2;
                    continue;
                }
            }
    }

    printf("%.2lf",(a + b) / 2);
    }
    
    return 0;

}
double f(double a,double b,double c,double d,double x)
{
    double f;
    f = a*x*x*x + b*x*x + c*x + d;
    return f;
}