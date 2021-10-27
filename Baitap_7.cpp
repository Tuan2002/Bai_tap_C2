
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<curses.h>
int a=2;
int result;
int main ()
{
    result= a<<9;
    printf("Ket qua cua bieu thuc la: %d\n", result);
    return 0;
}