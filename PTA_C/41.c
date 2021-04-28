//41
#include<stdio.h>
int main(void)
{
	int n,i,j,m;
	int sum = 0;
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++)
	{
		m = 1;
		for(j = 1;j <= i;j++)
		{
			m *= j;
			printf("m = %d\n",m);
		}
		
		sum += m;
	
	}
	printf("%d",sum);

	return 0;
}


