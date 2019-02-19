bool isPrime(int p)
{
    bool flag;
    for(int i=2; i<p; i++)
    {
        if(p%i==0)
        {
            return false;
        }
    }
    return true;
}