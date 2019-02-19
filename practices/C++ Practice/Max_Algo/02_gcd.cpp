int gcd(int a, int b)
{
    if(b==0) return a;
    else
        return gcd(a,a%b);
}


// Using gcd
int gcd(int a, int b)
{
    return b ? gcd(b,a%b) : a;
}

