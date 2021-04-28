//number of troopers
#include<stdio.h>
int main(void)
{
	long i;
	for(i = 1;i <= 10000000;i++)
		{
			if(i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
			{
				printf("%ld",i);
				break;	
			}
				
		}
		
	return 0;
}
