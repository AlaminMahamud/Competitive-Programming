#include<stdio.h>
#include<string.h>

int main(){
    int l,i,count;
    char a[2000];
    while(gets(a)){
        l=strlen(a);
        count=0;
        for(i=0;i<l;i++){
             if( (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')  ){
                while(a[i]!=' ' || a[i]!='\0'){
                    if( a[i]=='\0' || (a[i]>= 32 && a[i]<=64) ||  (a[i]>= 91 && a[i]<=96) ||  (a[i]>= 123 && a[i]<=127)){
                            count++;break;
                    }
                    i++;
                }
             }
             else{
                i++;
             }
        }
        printf("%d\n",count);
    }
return 0;
}

