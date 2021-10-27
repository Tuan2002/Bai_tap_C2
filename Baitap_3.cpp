#include<stdio.h>
#include<curses.h>
int main ()
{
    float a, b, max;
    printf("Nhap hai so a, b = ");
    scanf("%f%f", &a, &b);
    max = a > b ? a : b;
    printf("\nSo lon nhat cua %5.2f va %5.2f la: %5.2f", a, b, max);
    return 0;
}