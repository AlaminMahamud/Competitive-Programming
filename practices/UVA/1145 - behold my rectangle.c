#include <stdio.h>
int main()
{
    int i,t;
    long long int a,b,c,d;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)
        {
            printf("banana\n");
        }
        else if(a+b+c>d && b+c+d>a && c+d+a>b)
        {
            if((a==b && c==d) || (a==d && b==c)|| (a==c && b==d))
            {
                if(a==b && b==c && c==d && d==a)
                {
                    printf("square\n");
                }
                else printf("rectangle\n");
            }
            else  printf("quadrangle\n");

        }
        else
        {
            printf("banana\n");
        }
    }

    return 0;
}
