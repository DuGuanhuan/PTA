#include<stdio.h>
int main(void)
{
	int n,i;
	float j;
	float sum = 0;
	printf("you can enter a number\n");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++)
	{
		j = i;
		if(i % 2 == 0)
		{
			sum -= (j/(2*j - 1));
		//printf("sum = %d",sum);
		}	
		else
			sum += (j/(2*j - 1));
	}
	printf("%.3f",sum);
	
	return 0;
	
}
