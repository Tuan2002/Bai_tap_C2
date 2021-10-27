#include<stdio.h>
#include<string.h>
char dhv[20]="TRUONG DAI HOC VINH";
char vkt[27]="VIEN KY THUAT VA CONG NGHE";
char cntt[32]="NGANH KY SU CONG NGHE THONG TIN";
char k62[8]="KHOA 62";
int main ()
{
    printf("%22s\n",dhv);
    printf("%-s\n",vkt);
    printf("%-s %14s\n",cntt,k62);
    return 0;
}