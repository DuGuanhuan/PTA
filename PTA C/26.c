#include<stdio.h>
int main(void)
{
	int x,y,m,n,i,a,b;
	m = 1;
	
	scanf("%d %d",&a,&b);
	if(a > b)
	{
		x = b;
		y = a;
	}
	else
	{
		x = a;
		y = b;
	}
	for(i=2;m%y != 0;i++)
	m = x*i;
	
	for(n=x;y%n != 0;n--);
	
	printf("%d,%d",n,m);
	
	return 0;
 } 
