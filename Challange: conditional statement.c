#include<stdio.h>
int main()
{
  int m;
  printf("Enter marks : ");
  scanf("%d", &m);
  printf("\n%s", (m>=85 && m<=100)?"Grade A\n\nBest Result!!!\n":((m>=70 && m<=84)?"Grade B\n\nBetter Result!!\n":((m>=55 && m<=69)?"Grade C\n\nGood result!\n":((m>=40 && m<54)?"Grade D\n\nNot Good. Improvement needed\n":"Grade F\n\nDon't give up.\n\nYou can do it\n" ))));
  
  return 0;
}