#include <stdio.h>
int main()
{
    int num,fac=1;

    printf("enter factorial number");
    scanf("%d",&num);

    if (num<0)
    {
        printf("invalid input");
    }else if (num==0)
    {
        printf("factorial=1");
    }else
    {
        for(int i=1; i<num; i++)
        {
            fac*=i;
        }
        printf("factorial=%d",fac);
    }
}
