#include<stdio.h>
int main(void)
{
    float open,high,low,close;
    scanf("%f %f %f %f",&open,&high,&low,&close);
    if(close > open)
    {
        if(high > close && low < open)
            printf("R-Hollow with Lower Shadow and Upper Shadow");
        else if(high > close)
            printf("R-Hollow with Upper Shadow");
        else if(low < open)
            printf("R-Hollow with Lower Shadow");
        else  
            printf("R-Hollow");
    }
    else if(close < open)
    {
        if(high > open && low < close)
            printf("BW-Solid with Lower Shadow and Upper Shadow");
        else if(high > open)
            printf("BW-Solid with Upper Shadow");
        else if(low < close)
            printf("BW-Solid with Lower Shadow");
        else  
            printf("BW-Solid");
    }
    else 
    {
        if(high > open && low < close)
            printf("R-Cross with Lower Shadow and Upper Shadow");
        else if(high > open)
            printf("R-Cross with Upper Shadow");
        else if(low < close)
            printf("R-Cross with Lower Shadow");
        else  
            printf("R-Cross");
    }
}