#include<stdio.h>
int main(void)
{
	int i,j,n;
	int jud = 1;                       //jud =1
	scanf("%d",&n);
	for(i = 0;i < 100;i++)
	{
		for(j = 0;j < 100;j++)
		{
			//printf("i = %d,j = %d\n",i,j);
			if(100*j + i - n == 200*i + 2*j)
			{
				jud = 0;
				printf("%d.%d",i,j);
				break;		
			}
			
			
		}

	}
	if(jud)                  //jud = 1,if 
	{
		printf("No Solution");
	}
	
	
}
