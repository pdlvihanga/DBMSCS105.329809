#include <stdio.h>
int main()
{
        int choice,num1,num2;
        printf("menu\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("enter your choice");
        scanf("%d",&choice);

        printf("enter two numbers");
        scanf("%d %d",&num1, &num2);

        switch (choice) {
            case1:
                printf("result: %d\n",num1+num2);
                break;
           case2:
               printf("result:%d\n",num1-num2);
               break;
           case3:
               printf("result:%d\n",num1*num2);
               break;
           case4:
               printf("result:%d\n",num1/num2);
               break;
        }


}
