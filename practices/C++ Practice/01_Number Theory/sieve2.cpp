#include<iostream>
#include<cmath>
using namespace std;

bool isSieveDone = false;
bool status[1100002];

void generateSieve(){
    int N = 1000000;
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

int main(){
    for(int i = 0; i<=10000; i++)
        if(!isNotPrime(i))
            cout << i << "\t";
}