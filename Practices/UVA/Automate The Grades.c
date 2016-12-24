#include<stdio.h>
int main(){

    int i,j,n,t1,t2,f,a,c[3],max1,max2,grade,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d %d",&t1,&t2,&f,&a);
        max1=0;max2=0;
        for(j=0;j<3;j++){
            scanf("%d",&c[j]);
            if(max1<c[j]){temp=max1;max1=c[j];if(max1>temp && temp>max2)max2=temp;continue;}
            if(max2<c[j]){max2=c[j];}
        }
        grade=0;
        grade = t1+ t2+ f+ a+ ((max1+max2)/2);
        if(grade>=90) printf("Case %d: A\n",i);
        else if(grade>=80 && grade <90)printf("Case %d: B\n",i);
        else if(grade>=70 && grade <80)printf("Case %d: C\n",i);
        else if(grade>=60 && grade <70)printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);
    }
return 0;
}
