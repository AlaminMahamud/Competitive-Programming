#include<stdio.h>
#include<string.h>
int main(){
    char a[6],i=0;
    while(scanf("%s",a)!=EOF){
    i++;
    if(a[0]=='*')break;
    if(!strcmp(a,"Hajj"))printf("Case %d: Hajj-e-Akbar\n",i);
    if(!strcmp(a,"Umrah"))printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
