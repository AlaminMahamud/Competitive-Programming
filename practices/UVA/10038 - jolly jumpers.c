#include <stdio.h>
int main()
{
    int a[3001],i,j,b,t;
    while(scanf("%d",&b)!=EOF)
    {
        for(i=0; i<b; i++)
        {
            scanf("%d",&a[i]);
        }
        if(b==1)
        {
            printf("Jolly\n");
        }
        else if(b==2)
        {
            if(abs(a[1]-a[0])==1)
            {
                printf("Jolly\n");
            }
            else
            {
                printf("Not jolly\n");
            }
        }
        else
        {
            for(i=1; i<b; i++)
            {
                a[i-1]=abs(a[i]-a[i-1]);
            }
            for(i=1; i<b-1; i++)
            {
                for(j=b-2; j>=i; --j)
                {
                    if(a[j] < a[j-1])
                    {
                        t=a[j-1];
                        a[j-1]=a[j];
                        a[j]=t;
                    }
                }
            }



            if(a[0]==1){
                for(i=1;i<b-1;i++){
                    if(a[i]==b-1){
                        printf("Jolly\n");
                        break;
                    }
                    else if(a[i]==i+1){
                        continue;
                    }else{
                        printf("Not jolly\n");
                        break;
                    }
                }
            }else{
                printf("Not jolly\n");
            }


        }

    }


    return 0;
}
