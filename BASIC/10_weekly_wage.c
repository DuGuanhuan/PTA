    #include<stdio.h>
    int main(void)
    {
        int w_years,time;
        float wage;
        scanf("%d %d",&w_years,&time);
        if(w_years < 5)
        {
            if(time <= 40)
                wage = 30 * time;
            else
                wage = 1200 + 45 * (time - 40);
        }

        else
        {
            if(time <= 40)
                wage = 50 * time;
            else
                wage = 2000 + 75 * (time - 40);
        }

        printf("%.2f",wage);

        return 0;
            

    }