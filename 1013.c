#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,g,s;
    scanf("%d %d %d",&a,&b,&c);
    s=((a+b)+abs(a-b))/2;
    g=((s+g)+abs(g-s))/2;
    printf("%d eh o maior\n",g);

    return 0;
}
