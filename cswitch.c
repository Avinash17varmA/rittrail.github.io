#include<stdio.h>
void main()
{
int a;
printf("Q1.\nwhat is the spelling of 1?\n1- one.\n2- two.\n3- three.\nchoose one option - ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("correct answer");
break;
case 2:
printf("wrong answer");
break;
case 3:
printf("wrong answer");
break;
default:
printf("invalid option. Please choose number between 1 and 3 only");
break;
}
}