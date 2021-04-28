#include<stdio.h>
int resort(int n);
int main(void)
{
	int n;
	scanf("%d",&n);                //input a three-digit number
	while(n != 495)
	{
		resort(n);	
	}
	
	
	return 0;
	
}
int resort(int n)
{
	int cnt,i,a,b,c,temp;
	int ar[3];
	for(i = 100;i >= 1;i / 10)
	{
		cnt = 0;
		ar[cnt] = n % i;            // get each num
		n = n / 10;
		cnt++;
	}
	a = ar[0];
	b = ar[1];
	c = ar[2];
	printf("a = %db = ,%d,c = %d",a,b,c);
	
	if(a > b)	
	{
		temp = a;
		a = b;
		b = temp;
	}
	if(b > c)
	{
		temp = b;
		b = c;
		c = temp;	
	}
	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

		n = (c*100+b*10+a - c*100+b*10+a);
		printf("%d:%d - %d = %d",i,c*100+b*10+a,a*100+b*10+c,n);  //output 
		
		return n;
}

		
	
	
