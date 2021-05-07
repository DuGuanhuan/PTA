#include<stdio.h>
long factorial(int n);
int polynomial(int n);
int main(void)
{
    int i;
    double a = 1,n,sum = 0;
    scanf("%lf",&n);
    for(i = 0;a >= n;i++)
    {
        if(i == 0)
            a = 1;
        else
            a = (double)factorial(i) / polynomial(i);
        
        sum += a;
        //printf("sum = %lf",sum);
    }
    printf("%.6lf",2*sum);
    

    return 0;
}
long factorial(int n)
{
    int i,result = 1;
    for(i = 1;i <= n;i++)
        result *= i;

    return result;
}

int polynomial(int n)
{
    int i,result = 1,cnt = 1;
    for(i = 3;cnt <= n;cnt++,i += 2)
    {
        result *= i;
    }
    return result;
}