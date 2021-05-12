#include<stdio.h>
int main(void)
{
    char string [50];
    char ar[1000][50];
    int i = 0;
    
    while(1)
    {
        if(scanf("%s",string) != 0)
        {
            ar[1000][i] = string;
            i++;
        }

        if(getchar() == '\n')
            break;

    }
    for(;i >= 0;i--)
    {
        puts(ar[1000][i] );
    }
}