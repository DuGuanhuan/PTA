#include<stdio.h>
int main(void)
{
    int now,pasted,hour,min,total,n_hour,n_min;
    scanf("%d %d",&now,&pasted);
    
    n_hour = now / 100;
    n_min = now % 100;
    total = n_hour * 60 + n_min;
    total = total + pasted;
    hour = total / 60;
    min = total % 60;
    if(min == 0)
        printf("%d00",hour);
    else
        printf("%d%d",hour,min);
    

}
