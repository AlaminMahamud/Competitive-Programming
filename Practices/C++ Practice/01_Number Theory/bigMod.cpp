#include<iostream>
using namespace std;


int big(int a, int b)
{
    int x;
    if(b==0) return 1;
    if(b%2==0) 
    {
        x = big(a, b/2);
        return (x*x);
    }else 
    {
        return (a*big(a,b-1));
    }
}

int bigMod(int a, int b, int M)
{
    int x;
    if(b==0) return 1%M;
    if(b%2==0) 
    {
        x = bigMod(a, b/2, M);
        return (x*x)%M;
    }else 
    {
        return (x*bigMod(a,b-1,M))%M;
    }
}

int main()
{
    for(int i=0; i<=100; i++)
    {
        cout << big(2,i) << "\t";
    }
    return 0;
}