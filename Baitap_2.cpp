
#include<stdio.h>
#include<curses.h>
int main () 
{
    int a, b;
    printf("Nhap hai so a, b = ");
    scanf("%d%d", &a, &b);
    printf("\nTong hai so %5d va %5d la %5d", a, b, a + b); 
    printf("\nHieu hai so %5d va %5d la %5d", a, b, a - b); 
    printf("\nTich hai so %5d va %5d la %5d", a, b, a * b); 
    printf("\nThuonghai so %5d va %5d la %5.2f", a, b, (float)a/ b); 
    return 0;
}

