// 1. Write a function to calculate the area of a circle. (TSRS)
float area(float);
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    float radius;
    system("cls");

    printf("Enter the value of radius of circle : ");
    scanf("%f", &radius);
    printf("Area of circle is %.5f sq.units", area(radius));
    getch();
    return 0;
}

float area(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;
}