#include <stdio.h>
#include <math.h>
int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int ac;
    int bd;
    int acac;
    int bdbd;
    int plus;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    ac = a - c;
    bd = b - d;
    acac = ac * ac;
    bdbd = bd * bd;
    plus = acac + bdbd;
    printf("%i", plus);
}