#include<stdio.h>
#include<string.h>
int main()
{
    double a,b;
    char str[100];
    gets(str);
    scanf("%lf",&a);
    scanf("%lf",&b);

    printf("TOTAL = R$ %.2lf\n",a+((15.0/100.0)*b));
    return 0;
}



