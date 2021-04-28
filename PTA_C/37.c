#include<stdio.h>
int main(void)
{
	long n;
	int j,x;
	int i = 0;
	int a[100];
	scanf("%ld",&n);
	if(n == 0)
		printf("0 ");
	else
		for(;n > 0;n = n / 10)
		{
			x = n % 10;
			a[i] = x;             //storage x -> a[i]
			i++;
		}
		
		for(j = i - 1;j >=0;j--)
		{
			printf("%d ",a[j]);
		}
		
		return 0;
}
