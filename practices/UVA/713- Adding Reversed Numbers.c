#include<stdio.h>
#include<string.h>
int main(){
    char char1[200],char2[200],char3[200];
    int i,j,num1[200],num2[200],t,z,a,b,sum1[200],p,x=0,y=0,n=0;


    scanf("%d",&t);
    for (z=1;z<=t;z++){

            scanf("%s %s",char1,char2);
            a=strlen(char1);
            b=strlen(char2);


            if(a>=b){
                p=a;

                for(j=0;j<a;j++){
                    num1[(a-1)-j]=char1[j]-'0';
                    num2[(a-1)-j]=char2[j]-'0';
                }

                if((a-b)!=0){
                            for(i=0;i<a-b;i++){
                                num2[i]=0;
                            }
                }

                    for(j=0;j<a;j++){

                        sum1[j]=num1[(a-1)-j]+num2[(a-1)-j];
                        if(a-1==j && sum1[j]>=10){
                                    sum1[j]-=10;
                                    sum1[a]=1;
                                    p=a+1;
                        }
                        if(sum1[j]>=10){
                                     sum1[j]-=10;
                                     num2[(a-2)-j]+=1;

                        }
                    }

                    for(j=0;j<a;j++){

                    x=0;
                    for(i=0;i<p;i++){
                            char3[x]=sum1[i]+'0';
                            char3[x+1]='\0';
                            x++;

                    }



                }



                a=strlen(char3);y=0;n=0;
                for(i=0;i<a;i++){
                    if(y==1)    {break;}
                    if(char3[i]=='0'){
                        if(n==1){
                            for(j=a-1;j>i;j--){
                                if(char3[j]=='0') {n=0;continue;}
                                else{
                                        for(x=i;x<=j;x++){
                                            printf("%c",char3[x]);
                                            n=1;
                                        }
                                         y=1;break;
                                }
                            }
                        }else{if(char3[j]=='0') {n=0;continue;} }
                    }else{
                    printf("%c",char3[i]);
                    n=1;
                    }


                }

                printf("\n");

            }
            else{
                 p=b;
                for(j=0;j<b;j++){
                    num1[(b-1)-j]=char1[j]-'0';
                    num2[(b-1)-j]=char2[j]-'0';
                }
                    if((b-a)!=0){
                            for(i=0;i<b-a;i++){
                                num1[i]=0;
                            }
                    }


                    for(j=0;j<b;j++){

                        sum1[j]=num1[(b-1)-j]+num2[(b-1)-j];
                        if(b-1==j && sum1[j]>=10){
                                    sum1[j]-=10;
                                    sum1[b]=1;
                                    p=b+1;
                        }
                        if(sum1[j]>=10){
                                     sum1[j]-=10;
                                     num2[(b-2)-j]+=1;

                        }

                    }


                    for(j=0;j<a;j++){

                    x=0;
                    for(i=0;i<p;i++){
                            char3[x]=sum1[i]+'0';
                            char3[x+1]='\0';
                            x++;

                    }



                }



                a=strlen(char3);y=0;n=0;
                for(i=0;i<a;i++){
                    if(y==1)    {break;}
                    if(char3[i]=='0'){
                        if(n==1){
                            for(j=a-1;j>i;j--){
                                if(char3[j]=='0') {n=0;continue;}
                                else{
                                        for(x=i;x<=j;x++){
                                            printf("%c",char3[x]);
                                            n=1;
                                        }
                                         y=1;break;
                                }
                            }
                        }else{if(char3[j]=='0') {n=0;continue;} }
                    }else{
                    printf("%c",char3[i]);
                    n=1;
                    }

                }
                printf("\n");
            }



    }


return 0;
}
