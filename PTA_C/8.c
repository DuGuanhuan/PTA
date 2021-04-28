#include<stdio.h>
int main(void)
{
	int length;
	float weight;
	
	scanf("%d",&length);
	weight = (length - 100)*0.9;
	printf("%0.1f",weight*2);
	
	return 0;
}
