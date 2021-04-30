#include<stdio.h>
int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	c = n / 100;
	n = n % 100;
	b = n / 10;
	a = n % 10;
	if(a == 0 && b != 0)
		printf("%d%d",b,c);
	else if(a == 0 && b == 0)
		printf("%d",c);
	else
		printf("%d%d%d",a,b,c);
	
	
	return 0;
	
}
