#include <stdio.h>
int main()
{
       int choice;
       float radius, PI=3.14;

       printf("menu\n");
       printf("1. Calculate circumference of a circle\n");
       printf("2. Calculate the area of a circle\n");
       printf("3. Calculate volume of a sphere\n");
       printf("enter your choice :");
       scanf("%d ", &choice);

       printf("enter the radius");
       scanf("%f", &radius);

       switch (choice) {
           case1:
           printf("circumference: %.2f\n", 2*PI*radius);
           break;
           case2:
               printf("area: %.2f\n",PI*radius*radius);
               break;
          case3:
              printf("volume:%.2f\n",4/3.0*PI*radius*radius*radius);
              break;
      default:
              printf("invalid choice");
       }


}
