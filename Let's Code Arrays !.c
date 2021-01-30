/********************************************************
Write a C program to initialize a 3x3 array,
insert elements into the array, 
read and print an array of elements using only pointers.  
Also find and print the sum of all diagonal elements. 
********************************************************/

#include <stdio.h>

int main()
{
  int num[3][3],i,j,s1=0,s2=0;
  printf("Input elements in the matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Element-[%d],[%d]\t",i,j);
      scanf("%d",&num[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
        s1=s1+num[i][j];
      }
      if(i+j==2)
      {
        s2=s2+num[i][j];
      }
    }
  }
  printf("Diagonal sum of matrix are %d and %d",s1,s2);
  getch();
}