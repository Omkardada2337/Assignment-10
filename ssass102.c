// 2. Write a function to calculate simple interest. (TSRS)
float si(float, float, float);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    float P, R, N;
    system("cls");

    printf("Enter the value of Principal amount : ");
    scanf("%f", &P);
    printf("\nEnter the value of Rate of interest in percentage per year :");
    scanf("%f", &R);
    printf("\nEnter the time period in years :");
    scanf("%f", &N);
    printf("\nSimple interest is %.5f /-Rs", si(P, N, R));
    getch();
    return 0;
}

float si(float p, float r, float n)
{
    float simin;
    simin = (p * n * r) / 100;
    return simin;
}