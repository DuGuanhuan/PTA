// moneky eat peach
#include <stdio.h>
int main(void)
{
	int i,n,eated;              //eated is peaches monkey eated per day 
	int sum = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		if(i == 1)
			eated = 1;          //�����Ƶ������һ��ʣһ�����ӣ��ó������ڶ�����˶��ٸ� 
		if(i == 2)
			eated = 3;
		if(i > 2)
			eated = eated * 2;
		
		sum += eated;
	}
	printf("%d",sum);
	return 0;
}
