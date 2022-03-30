#include<stdio.h>
void main()
{
int a,b;
printf("please enter the value of a : ");
scanf("%d",&a);
printf("\nplease enter the value of b : ");
scanf("%d",&b);
if ( a > b )
{
printf("\na greater than b");
}
else if ( a = b )
{
printf("\na equals to b");
}
else
{
printf("\na is less than b");
}
}