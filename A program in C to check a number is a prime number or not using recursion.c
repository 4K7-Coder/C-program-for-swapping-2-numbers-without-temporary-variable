#include <stdio.h>
#include <conio.h>

int prime(int n, int i)
{
  if(i==1)
   return 1;
  if(n%i==0)
   return 0;
  return prime(n, i-1);
}
void main()
{
  int n, p;
  printf("Enter any number : ");
  scanf("%d", &n);
  p=prime(n, n/2);
  if(p==1)
   printf("\n%d is a prime number\n", n);
  else
   printf("\n%d is a composite number\n", n);
  getch();
}
