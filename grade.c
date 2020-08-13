#inclde<stdio.h>
void main()
{
int marks=0;
printf("enter the marks:");
scanf("%d",&marks);
if((marks>84)&&(marks<100))
{ printf("grade A");
}
else if((marks>69)&&(marks<85))
{ printf("grade B");
}
else if((marks>54)&&(marks<70))
{ printf("grade C");
}
else if((marks>39)&&(marks<55))
{ printf("grade D");
}
else
{ printf("grade F");
}
retrn 0;
}
