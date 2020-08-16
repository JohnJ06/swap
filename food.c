#include<stdio.h>
void main()
{
int choice=0;
printf("selet a dish:\n1. Pizza\n2. Burger\n3. Pasta\n4. Frenchfries\n5. Sandwich");
scanf("%d",&choice);
switch(choice)
{ 
     case 1:
        printf("Food item- Pizza\nprice- Rs239");
        break;
     case 2:
        printf("Food item- Burger\nprice- Rs129");
        break;
     case 3:
        printf("Food item- Pasta\nprice- Rs179");
        break;
     case 4:
        printf("Food item- Frenchfries\nprice- Rs99");
        break;
     case 5:
        printf("Food item- Sandwich\nprice- Rs149");
        break;
     default :printf("invalid choice");
  }
 } 
