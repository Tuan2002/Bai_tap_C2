
#include<stdio.h>
#include<curses.h>
#include<math.h>
unsigned char a=10, b=4;
int x, y, z, t, s;
int main()
{
    x=a&b;
    y=a|b;
    z=a^b;
    t=a<<b;
    s=a>>b;
    printf("Bieu thuc x o he co so 10 = %2d; ", x); printf(" o he co so 8 = %2o\n",x);
    printf("Bieu thuc y o he co so 10 = %2d; ", y); printf(" o he co so 8 = %2o\n",y);
    printf("Bieu thuc z o he co so 10 = %2d; ", z); printf(" o he co so 8 = %2o\n",z);
    printf("Bieu thuc t o he co so 10 = %2d; ", t); printf(" o he co so 8 = %2o\n",t);
    printf("Bieu thuc s o he co so 10 = %2d; ", s); printf(" o he co so 8 = %2o\n",s);
    return 0;
}

