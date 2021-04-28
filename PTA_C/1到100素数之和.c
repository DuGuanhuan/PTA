#include<stdio.h>
int main(void)
{
	int x,IsPrime,i,sum;
	
	for(x=2; x<=100;x++)
	{
		IsPrime = 1;
		for(i = 2;i < x;i++)
			if (x % i == 0)
			{
			IsPrime = 0; 
			break;
			}
		if(IsPrime == 1)
		sum +=x;
	}
	printf("%d",sum);
	 
	return 0; 
 } 
