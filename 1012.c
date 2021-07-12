#include <stdio.h>
#define pi 3.14159

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double tri=(1.0/2.0)*a*c;
    double cir=pi*c*c;
    double tra=(1.0/2.0)*(a+b)*c;
    double sqr=b*b;
    double rct=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,sqr,rct);
    return 0;

}
