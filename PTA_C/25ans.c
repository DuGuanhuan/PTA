#include<stdio.h>
int main()
{
int a,c;
	scanf_s("%d",&c);
	for(a=0;c>0;){
		switch (c%2)
		{
		case 1:a += c;
		}scanf_s("%d", &c);
	}
	printf("%d", a);
		return 0;
}

