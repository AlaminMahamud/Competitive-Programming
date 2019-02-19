#include<iostream>
#include<cmath>

using namespace std;

#define SIZE_FLAG 1000000
#define SIZE_PRIME 1000000  

int prime[SIZE_PRIME], nPrime=0;
bool flag[SIZE_FLAG];

//Sieve Of Eratosthenes
void sieve(int n)
{
    int limit = sqrt(n);
    
    flag[0] = false;
    flag[1] = false;

    for(int i=2; i<SIZE_FLAG; i++)
        flag[i] = true;
    
    for(int i=4; i<limit; i+=2)
        flag[i] = false;
    
    prime[nPrime++] = 2;

    for(int i=3; i<=n; i+=2){
        if(flag[i])
        {
             prime[nPrime++] = i;
             for(int j=i*i; j<=n;j+=i*2)
                flag[j]=false;
        }   
    }
        
    cout << nPrime << endl << endl;

}   

int main()
{
    sieve(45000);
    for(int i=0; i<nPrime;i++)
        cout << prime[i] <<"\t";
}