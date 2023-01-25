#include <stdio.h>
#include <string.h>
struct point
{
  int code;
  int salary;
  char name[20];
};
int main()
{
  struct point e1, e2;
  struct point *ptr, *ptr2;
  ptr = &e1;
  (*ptr).code = 101;
  (*ptr).salary = 12000;
  strcpy((*ptr).name, "harry");
  printf(" %d %d %s", e1.code, e1.salary, e1.name);
  ptr2 = &e2;
  ptr2->code = 102; // arrow operator that is minus and greater symbol combined used to acces the member of the structure using pointer
  ptr2->salary = 23000;
  strcpy(ptr2->name, "amar dutt upadhyay");
  printf("\n %d %d %s", e2.code, e2.salary, e2.name);
  return 0;
}
