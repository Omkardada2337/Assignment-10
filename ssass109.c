// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
int check(int, int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N, digit, x;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &N);
    printf("\nEnter the digit you want to check inside a number :");
    scanf("%d", &digit);
    x = check(N, digit);
    if (x == 1)
    {
        printf("\nYes %d contains %d", N, digit);
    }
    else
    {
        printf("\nNo %d not contains %d", N, digit);
    }

    getch();
    return 0;
}
int check(int n, int d)
{
    while (n != 0)
    {
        int t;
        t = n % 10;
        if (t == d)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}