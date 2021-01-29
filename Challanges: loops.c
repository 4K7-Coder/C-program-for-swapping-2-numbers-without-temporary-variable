#include <stdio.h>

main()
{
  int n=6, row, col;
  
  for(row=1; row<=n; row++)
  {
    for(col=1; col<=row; col++)
    {
      printf("01");
    }
    printf("\n");
  }
}