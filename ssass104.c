// 4. Write a function to print first N natural numbers (TSRN)
void printN(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the value of N :");
    scanf("%d", &N);
    printN(N);
    getch();
    return 0;
}

void printN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}