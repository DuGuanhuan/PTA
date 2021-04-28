#include<stdio.h>
int main(void)
{
	int sum,x;
	sum = 0;
	
	scanf("%d",&x);
	while(x > 0)
	{
		switch(x % 2)
		{
		case 1:
		sum += x;
		} 
		scanf("%d",&x);
	}
	printf("%d",sum);
	
	return 0;
}
