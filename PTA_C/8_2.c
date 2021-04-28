#include<stdio.h>
int main(void)
{
	float x,y,difference,product;
	printf("Please enter two float numbers.and separated them with ,");
	while(scanf("%f,%f",&x,&y) == 2)
	{
		difference = x - y;
		product = x * y;
		printf("%f",difference / product);
		printf("Please enter the next number(q to quit)");
	}
	
	return 0;
}
