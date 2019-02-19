int binPow(int a, int n)
{
    if(n==0) return 1;
    if(n%2==0)
    {
        int x = binPow(a,n/2);
        return x*x;
    }
    else
        return x*binPow(x,n-1);
}

