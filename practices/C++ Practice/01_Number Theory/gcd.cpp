int find_gcd(int a, int b)
{
    int gcd=1;

    if(b == 0) return a;
    return find_gcd(b,a%b);
}