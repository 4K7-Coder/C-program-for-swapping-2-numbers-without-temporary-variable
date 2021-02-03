#include <stdio.h>

struct employee
{
  char name[50];
  int age;
  int ph_no;
  float salary;
};
int main()
{
  struct employee e[20];
  int i;
 
 for(i=0;i<20;i++) 
  {
    printf("Enter information for employee %d\n",i+1);
    printf("Enter name : ");
    scanf("%s",&e[i].name);
    printf("Enter Age : ");
    scanf("%d",&e[i].age);
    printf("Enter PhoneNumber : ");
    scanf("%d",&e[i].ph_no);
    printf("Enter Salary : ");
    scanf("%d",&e[i].salary);
  }
  printf("\nName \tAge \tPhoneNumber \tSalary\n");
 for(i=0;i<20;i++) 
  {
    printf("%s \t%d \t%d \t%d\n",e[i].name, e[i].age, e[i].ph_no, e[i].salary);
  }
  Return;
}
