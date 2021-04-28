#include <stdio.h>
int main(void)
{
	int f,c;
	scanf("%d",&f);
	c = 5 * ((f - 32) / 9.0);
	printf("Celsius = %d",c);
	
	return 0;	
} 
