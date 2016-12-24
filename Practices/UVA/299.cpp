include <iostream>
#include <cstdio>

using namespace std;

main()
{
    int a,b,r;
    scanf("%d",&a);
    for(int z=0; z<a; z++)
    {
        scanf("%d",&b);
        int c[b];
        r=0;
        for(int d=0;d<b;d++)
            {
                scanf("%d",&c[d]);
            }

        for(int i=0;i<b;i++){
            for(int j=i+1;j<b;j++)
            {
                if(c[i]>c[j])
                {
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                    r++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",r);
    }

    return 0;
}
