//Khai bao thu vien (Library)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Khai bao bien (Variable)
int a, b, c, max;
int main() 
{
        printf("Ban hay nhap mot so nguyen tuy y vao nhung tuy chon phia duoi nhe!\n"); 
        printf("So thu nhat = ");
        scanf("%d", &a);
        printf("So thu hai = ");
        scanf("%d", &b);
        printf("So thu ba = ");
        scanf("%d", &c);
            // Thuc hien so sanh 3 so
            max=a;
            max = (max < b) ? b : max;
            max = (max < c) ? c : max;
            (a==b && b==c) ?
        printf("Khong co gia tri lon nhat \n"):
        printf("Gia tri cua so lon nhat ban da nhap vao la %d\n",max);
        printf("====================================\n");
        printf("Ban quyen thuoc ve Tuan Nguyen 62K1 CNTT - Truong Dai hoc Vinh");
    return 0;
}


