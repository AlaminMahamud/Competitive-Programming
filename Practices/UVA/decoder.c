    #include<stdio.h>
    int main(){
    int i=0;
    char a[2000];


    while(gets(a)){
    i=0;
    while(a[i]!='\0'){
        a[i]-=7;
        i++;
    }
    puts(a);

    }

    return 0;
    }
