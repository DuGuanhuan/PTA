#include<stdio.h>
int main(void)
{
    int hour,min;
    scanf("%d:%d",&hour,&min);
    if(hour >= 12)
    {
        if(hour == 24)
            printf("0:0 AM");
        else if(hour == 12)
            printf("12:%d PM",min);
        else
            printf("%d:%d PM",hour - 12,min);
    }
    else
        printf("%d:%d AM",hour,min);

    return 0;
}