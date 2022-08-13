// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

void primef(int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int N;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &N);
    primef(N);
    getch();
    return 0;
}

void primef(int n)
{
    int i;
    for (i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
            i = 2;
        }
    }
}