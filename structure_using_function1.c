#include<stdio.h>
#include<string.h>
struct employe{
  int code;
  float salary;
  char name[30];
};
void show(struct employe e)
{
  printf("employe code :- %d \nemploye salary :-%f\nemployee name :-%s\n",e.code,e.salary,e.name);
};
int main()
{
  int i;
  char st[30];
  struct employe e;
  e.code=101;
  e.salary=121.3;
  strcpy(e.name,"harry");
  show(e);
  return 0;
}
