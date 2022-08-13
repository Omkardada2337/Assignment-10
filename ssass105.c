// 5. Write a function to print first N odd natural numbers. (TSRN)
void printO(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    printO(N);
    getch();
    return 0;
}

void printO(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
    }
}