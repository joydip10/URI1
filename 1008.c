#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&c);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,(c*(double)b));
    return 0;
}


