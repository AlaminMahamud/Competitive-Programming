#include<stdio.h>
int main()
{

    int n,a[40],i,count;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0) break;
        else if(n==0)
        {
            printf("0\n");
        }
        else
        {
            i=0;
            count=0;
            while(n!=0)
            {
                a[i]=n%3;
                n/=3;
                i++;
                count++;
            }
            for(i=count-1; i>=0; i--)
            {
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
