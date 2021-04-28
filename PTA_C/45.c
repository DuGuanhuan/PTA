#include<stdio.h>
#include<stdlib.h>
int sum_factor(int n);
int main(void)
{
	int m,n,i,j,cnt,num;
	int sum; 
	int * ar;
	
	scanf("%d %d",&m,&n);
	//scanf("%d",&num);
	for(num = m;num <= n;num++)
	{
		ar = malloc(sizeof(int) * 1000);
		sum = 0;
		cnt = 0;
		for(i = 1;i < num;i++)         //sotrage each yingshu to ar 
		{
			if(num % i == 0)
			{
				ar[i - 1] = i;
				sum += i;
				cnt++;
			}
		}
		//printf("sum = %d\n",sum);
		if(sum == num)
		{
			printf("%d = 1",sum);
		
			for(j = 1;j < cnt;j++)       //if is zhaowanshu, printf 
				printf(" + %d",ar[j]);
			printf("\n");
		}	
		free(ar);
	}                                      
	
	return 0;
}



