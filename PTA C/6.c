#include<stdio.h>
int main(void)
{
	int cm,foot,inch;
	float m;
	scanf("%d",&cm);
	m = 0.01 * cm;
	for(foot = 0; ;foot++)
	{
		for(inch = 0;inch <= 12;inch++)
		{
			printf("foot = %d,inch = %d\n",foot,inch);
			if((foot + inch/12) * 0.3048 == m)
			{
				printf("%d %d",foot,inch);
				break;
			}
			
		}		
	}
		
}
