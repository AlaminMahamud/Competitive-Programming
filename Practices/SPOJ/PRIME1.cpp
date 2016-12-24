#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define MAX 100000000


bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

int status[(MAX/32)+2];
void sieve()
{
	 int i, j, sqrtN;
     sqrtN = int( sqrt( MAX ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= MAX; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }

     cout << 2 <<endl;
     int mycount;
	 for(i=3,mycount=1;i<=MAX;i+=2){
         if( Check(status[i>>5],i&31)==0){
            mycount++;
            if(mycount%100==1)
            printf("%d\n",i);
         }
	 }

}

int main(){
    sieve();
    return 0;
}
