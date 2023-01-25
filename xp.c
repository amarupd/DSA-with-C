#include <stdio.h>
struct Hotel
{
  char name[50];
  char address[100];
  int grade;
  int roomcharge;
  int no_of_rooms;
};
int ask();
int main()
{
  ask();
  return 0;
}
int ask()
{
  int i, n;
  struct Hotel hotel[n];
  printf("Enter no. of hotels: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    /* code */
    printf("Enter name of hotel: ");
    scanf("%s", hotel[i].name);
    printf("Enter name of city: ");
    scanf("%s", hotel[i].address);
    printf("Enter the grade: ");
    scanf("%d", &hotel[i].grade);
    printf("Enter room charge: ");
    scanf("%d", &hotel[i].roomcharge);
    printf("Enter no. of rooms: ");
    scanf("%d", &hotel[i].no_of_rooms);
  }
  printf("Hotelname  city  grade  roomcharge no.of rooms: \n");
  for (i = 0; i < n; i++)
  {
    printf("%s  %s   %d   %d  %d\n", hotel[i].name, hotel[i].address, hotel[i].grade, hotel[i].roomcharge, hotel[i].no_of_rooms);
  }
}
