#include <stdio.h>
void convert_char(int i,int ar[]);
int main(void)
{
	int x,y,j;
	int i = 0;
	int a[100];
	printf("Please enter a int.\n");
	scanf("%d",&x);
	if(x == 0)
		printf("ling ");	
	
	if(x < 0)
	{
		printf("fu ");
		x = -x;
	}
	if(x > 0)
	{
		do
		{
			y = x % 10;     //�õ����һλ���� 
			a[i] = y;
			i++;            //�����һλ����浽���� 
			x = x/10;
				             //�������ֿ���������������� 
		}while(x != 0);
		
		convert_char(i,a);
	}
}
void convert_char(int i,int ar[])
{
	int j;
	for(j = i - 1;j >= 0;j--)          //�������ٵ������õ�switch�� 
	{
		switch(ar[j])
			{
			case 0:printf("ling ");
			break;
			case 1:printf("yi ");
			break;
			case 2:printf("er ");
			break;
			case 3:printf("san ");
			break;
			case 4:printf("si ");
			break;
			case 5:printf("wu ");
			break;
			case 6:printf("liu ");
			break;
			case 7:printf("qi ");
			break;
			case 8:printf("ba "); 
			break;
			case 9:printf("jiu ");
			break;
			}
	}
}

	

