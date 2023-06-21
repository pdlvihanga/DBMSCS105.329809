#include <stdio.h>
int main()








{
    int total=0;

    for(int i=0; i<10; i++)
    {
        printf("enter value for %d : ", i+1);
        int mark;
        scanf("%d", &mark);
        total=total+mark;
    }
    float avg = total/10;
    printf("total=%d\n",total);
    printf("avg = %.2f\n",avg);


    if(avg <50)
    {
        printf("fail");

    }
    else
    {
        printf("pass");
    }
}
