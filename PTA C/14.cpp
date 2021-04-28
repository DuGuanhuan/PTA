#include<stdio.h>
int main(void)
{
	int time,elapsed,hour,minute,hour_elapsed,minute_elapsed;
	
	scanf("%d %d",&time,&elapsed);
	hour = time / 100;
	minute = time % 100;
	hour_elapsed = elapsed / 60;
	minute_elapsed = elapsed % 60;
	
	if(minute + minute_elapsed > 60)
	printf("%d%d",hour+hour_elapsed+1,minute+minute_elapsed-60);
	else
	printf("%d%d",hour+hour_elapsed,minute+minute_elapsed);
	
	return 0;
	
	
}
