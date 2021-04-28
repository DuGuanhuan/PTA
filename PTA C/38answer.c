#include <stdio.h>
int main()
{
    int y,f,n,flag=1;
    scanf("%d",&n);
    for(y=0;y<50;++y)
    {
    	for(f=2*y+1;f<100;++f)
    		if(f*98-y*199==n)
    		{
    			printf("%d.%d",y,f);
				flag=0;
				break;	
			}
	}
	if(flag)
		printf("No Solution");
    return 0;
}

