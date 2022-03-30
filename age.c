#include<stdio.h>

void main()
{
  int a;

  printf("Please enter your age:");
  scanf("%d,&a");

  if (a > 18)
  {
    printf("\n you are not eligible");
  }
  else if (18 < a)
  {
    printf("\n b is greater than a");
  }
  
}
