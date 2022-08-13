// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)
long long int fact(long long int);
long long int arrange(long long int, long long int);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    long long int n, r;
    system("cls");

    printf("Enter the value of n items :");
    scanf("%lld", &n);
    printf("\nEnter the value of r selected items at a time :");
    scanf("%lld", &r);
    printf("Combination of %lld selected items out of %lld items is %lld", r, n, arrange(n, r));
    getch();
    return 0;
}

long long int fact(long long int n)
{
    long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

long long int arrange(long long int N, long long int R)
{
    long long int arr;
    arr = fact(N) /  fact(N - R);
    return arr;
}