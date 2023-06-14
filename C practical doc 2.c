#include <stdio.h>
int main()
{
      int number;
      printf("enter a number");
      scanf("%d",&number);
      switch(number %2){
          case 0:
      printf("the number is even");
      break;
         case 1:
      printf("the number is odd");
      break;
      }

}

