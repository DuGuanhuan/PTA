#include <stdio.h>
int main(void)
{
    int cm,i,jud = 1;
    double foot,inch;
    foot = 0;
    scanf("%d",&cm);
    while(jud)
    {
        for(i = 0;i < 12;i++)
        {
        	printf("i =  %d",i);
            if((foot + inch/12) * 0.3048 == cm/100)
            {
                printf("%d %d",foot,inch); 
                jud = 0;
                break;  
            }
                
        }
        foot++;
    }
    
    return 0;
}
