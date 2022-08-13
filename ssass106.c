// 6. Write a function to calculate the factorial of a number. (TSRS)
int fact(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printf("Factorial is %d", fact(N));
    getch();
    return 0;
}

int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}