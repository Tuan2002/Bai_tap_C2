
#include<stdio.h>
#include<curses.h>
#include<math.h>
#define PI 3.14
//#define PI 3.14159;
int main()
{
    float r, cv, dt;
    printf("Nhap r  = ");
    scanf("%f", &r);
    cv = r * 2 * PI;
    dt = r * r * PI;
    printf("\nBan kinh = %5.2f", r); 
    printf("\nChu vi = %5.2f", cv); 
    printf("\nDien tich = %5.2f", dt);
    return 0;
}