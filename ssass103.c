// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
int checkeo(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);
    if (checkeo(num) == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    getch();
    return 0;
}

int checkeo(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}