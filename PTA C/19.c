/*�����ʽ:
������һ���а��ո�ʽ��yyyy/mm/dd����������/��/�ա����������ڡ�ע�⣺������б������Ǹ�������ܱ�4���������ܱ�100�����������ܱ�400�����������2����29�졣

�����ʽ:
��һ����������Ǹ����еĵڼ��졣
*/

#include<stdio.h>
int main(void)
{
	int year,month,day,d = 0;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4 == 0 && year %100 !=0 || year%400 == 0)
	{
		switch(month - 1)
		{
		case 11:d += 30;
		case 10:d += 31;
		case 9:d += 30;
		case 8:d += 31;
		case 7:d += 31;
		case 6:d += 30;
		case 5:d += 31;
		case 4:d += 30;
		case 3:d += 31;
		case 2:d += 29;
		case 1:d += 31;
		case 0:d += day;
		}
		printf("%d",d);
	}
	
	else
	{
		switch(month - 1)
		{
		case 11:d += 30;
		case 10:d += 31;
		case 9:d += 30;
		case 8:d += 31;
		case 7:d += 31;
		case 6:d += 30;
		case 5:d += 31;
		case 4:d += 30;
		case 3:d += 31;
		case 2:d += 30;
		case 1:d += 31;
		case 0:d += day;
		} 
		printf("%d",d);
	}
	return 0;
}
