/*输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。
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
