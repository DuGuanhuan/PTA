#include<stdio.h>
double numerator(int n);
int main(void)
{
	int n,i;
	double m;
	double sum = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		if(i <= 2)
		{
			if(i == 1)
				m = 2;
			if(i == 2)
				m = 3.0/2.0;
		}
		else
			m = (double)numerator(n) / (double)numerator(n - 1);
		
		sum += m;
		//printf("sum = %lf",sum);
	}
	printf("%.2lf",sum);


	return 0;
	

}
double numerator(int n)
{
	int v;
	if(n <= 2)
		{
			if(n == 1)
				v = 2;
			if(n == 2)
				v = 3;
		}
	else
	{
		v = numerator(n - 1) + numerator(n - 2);
	}
	//printf("v = %d",v);
	return v;
}
