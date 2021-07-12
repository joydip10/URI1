#include<stdio.h>
int main()
{
    int a,b,e,f;
    float c,g;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&e,&f,&g);


    printf("VALOR A PAGAR: R$ %.2f\n",((double)b*c)+((double)f*g));
    return 0;
}



