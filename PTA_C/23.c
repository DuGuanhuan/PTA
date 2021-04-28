#include<stdio.h>
int main(void)
{
	float x,y;

	scanf("%f",&x);
	if(x <= 15)
	printf("y = %0.2f",4*x/3);
	else
	printf("y = %0.2f",2.5*x - 17.5);
	
	return 0;
}
