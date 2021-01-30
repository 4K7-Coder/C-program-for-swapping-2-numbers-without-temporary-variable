#include <stdio.h>
#include <conio.h>

int main()
{
  int n1, n2;
  printf("Enter two numbers : ");
  scanf("%d %d", &n1, &n2);
  printf("\nLCM of %d and %d is : %d\n", n1, n2, lcm(n1, n2));
}
int lcm(int a,int b)
{
  static int m=0;
  m=m+b;
  if(m%a==0 && m%b==0)
   return m;
  return lcm(a,b);
}