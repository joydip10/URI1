#include<stdio.h>

int main()
{
    int a,b,t,i,j,p,q,r,temp;

    scanf("%d",&t);
    if(t>3000 || t<1 ){return 0;}
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a<1 || a>1000 && b<1 || b>1000)
        {
            break;
        }
        if(b>a)
        {
            temp=b;
            b=a;
            a=temp;
        }
        for(i=1;i<=a;i++)
        {
             if(a%i == 0 && b%i==0)
             {
                 p=i;
                 q=i;
             }
             if(p==q)
             {
                 r=p;
             }

        }
        printf("%d\n",r);

    }

}
