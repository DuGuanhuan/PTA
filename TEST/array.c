#include<stdio.h>
void get_array(int * ar);
void printf_array(int * ar);
int main(void)
{
    int array[5];
    get_array(array);
    printf_array(array);

}

void get_array(int * ar)              // get elements
{
    int i;
    printf("you can enter the elements of array");
    for(i = 1;i <= 5;i++)
    {
    
        scanf("%d",ar);
        ar++;
        if(i <= 4)
        	printf("enter the next element");
        else
        	printf("Done!\n");
    }
    
}

void printf_array(int * ar)
{
    int i;
    printf("ar[5]:");
    for(i = 0;i < 5;i++)
    {
        printf("%d",*(ar + i));
    }
    
}
