#include<stdio.h>
int main(void)
{
	double sum;
	double con,numerator,denominator;      //double type, prevent bigger n
	int n,i;
	scanf("%d",&n);
	numerator = 2;
	denominator = 1;
	
	for(i = 1;i <= n;i++)
	{
		sum += (double)numerator / denominator;
		con = numerator;                 // add a variable to convert numerator 
		numerator = con + denominator;   
		denominator = con;               //update numer..deno..
		
		     
		//printf("numerator = %d\n",numerator);
		//printf("denominator = %d\n",denominator);
	}
	printf("%.2lf",sum);
	return 0;
}
