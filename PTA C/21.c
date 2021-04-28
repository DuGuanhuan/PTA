#include<stdio.h>
int main(void)
{
	int velocity;
	scanf("%d",&velocity);
	if(velocity > 60)
	printf("Speed:%d-Speeding",velocity);
	else
	printf("Speed:%d-OK",velocity);
	
	return 0;
}
