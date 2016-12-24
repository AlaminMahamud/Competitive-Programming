#include<stdio.h>

int main()
{
    int a[9],i,min,s[6];
    while(scanf("%d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])!=EOF)
    {

        s[0]=a[3]+a[6]+a[2]+a[8]+a[1]+a[4];
        s[1]=a[3]+a[6]+a[1]+a[7]+a[2]+a[5];
        s[3]=a[5]+a[8]+a[1]+a[7]+a[0]+a[3];
        s[2]=a[5]+a[8]+a[0]+a[6]+a[1]+a[4];
        s[5]=a[4]+a[7]+a[2]+a[8]+a[0]+a[3];
        s[4]=a[4]+a[7]+a[0]+a[6]+a[2]+a[5];
        min=s[0];
        for(i=1; i<=5; i++)

        {
            if(s[i]<min)
                min=s[i];
        }

        if(min==s[0])
            printf("BCG %d",min);
        else if(min==s[1])
            printf("BGC %d",min);
        else if(min==s[2])
            printf("CBG %d",min);
        else if(min==s[3])
            printf("CGB %d",min);
         else if(min==s[4])
            printf("GBC %d",min);
         else if(min==s[5])
            printf("GCB %d",min);

        printf("\n");
    }

    return 0;
}
