#include<iostream>
#include<cmath>
using namespace std;

bool isSieveDone = false;
bool status[110000];

void generateSieve(){
    int N = 100000;
    int sq = sqrt(N);
    isSieveDone = true;

    for(int i = 4; i < N; i += 2)
        status[i] = 1;
    for(int i = 3; i <= sq; i += 2)
        if(!status[i])
            for(int j = i * i; j<=N; j += i)
                status[j] = 1;
}

bool isNotPrime(int n){
    if(!isSieveDone)
        generateSieve();
    return status[n];
}

void primeFactorize(int n){
    if(!isNotPrime(n))
        cout << n << endl;
    
    int prime = 2;    
    
    while(n/prime != 1){
        if(n%prime==0){
            cout << prime << "\t";
            n /= prime;   
        }
        do{
            prime++;
        }while(status[prime]!=0);
    }
}

int main(){
        primeFactorize(10);
        cout << endl;

        primeFactorize(20);
        cout << endl;


        primeFactorize(30);
        cout << endl;
}
