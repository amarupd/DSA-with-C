#include <stdio.h>
#include <conio.h>
int fact(int a);
int main()
{
    int n;
    printf("enter the number to generate factorial ");
    scanf("%d", &n);
    printf("the factorial is :- %d", fact(n));
    getch();
}
int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
        return a * fact(a - 1);
}
