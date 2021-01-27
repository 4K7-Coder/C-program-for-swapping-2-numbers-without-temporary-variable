#include <stdio.h>
#include <conio.h>

main()
{
  int a, b;
  printf("\nEnter First Number : ");
  scanf("%d", &a);
  printf("\nEnter Second Number : ");
  scanf("%d", &b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nNew value of First Number : %d",a);
  printf("\n\nNew value of Second Number : %d\n",b);
  printf("\nBoom!!! The numbers swapped successfully");
  printf("\n\n\n\n\n\n\n\n\n\n\n\nCodes written by 4k7\n\n\n\n");
  return 0;
}