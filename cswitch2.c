#include<stdio.h>
void main()
{
int a;
printf("enter a number between 1 and 3: ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("you entered one");
break;
case 2:
printf("you entered two");
break;
case 3:
printf("you entered three");
break;
default:
printf("wrong choice");
break;
}
}