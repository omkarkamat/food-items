#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
printf("enter any number between 1 and 5\n");
scanf("%d",&a);
switch(a)
{
case 1:
    printf("food item-pizza\n price-239\n");
   break;
    case 2:
    printf("food item-burger\n price-129\n");
     break;
    case 3:
    printf("food item-pasta\n price-179\n");
     break;
    case 4:
    printf("food item-french fries\n price-99\n");
     break;
    case 5:
    printf("food item-sandwich\n price-149\n");
     break;
    default:
        printf("number not valid");
}
}
