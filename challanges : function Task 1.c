/**************************************************************
C Program to find the sum of digits of a number using recursion. 
***************************************************************/

#include <stdio.h>
int add_digits(int n)
{
  int s=0, r;
  while(n!=0)
  {
    r=n%10;
    s=s+r;
    n=n/10;
  }
  return s;
}
void main()
{
  int n, r;
  printf("Enter the number : ");
  scanf("%d", &n);
  r=add_digits(n);
  printf("\nSum of digits : %d\n", r);
}