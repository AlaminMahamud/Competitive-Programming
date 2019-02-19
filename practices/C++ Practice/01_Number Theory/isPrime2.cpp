bool Prime(int p)
{
    if(p<=1)
        return false;    

    if(p%2==0)
    {
        return false;
    }

    int limit = Math.sqrt(p)+1;

    for(int i=3; i<=limit; i+=2)
    {
        if(p%i==0)
            return false;
    }
    
    return true;
}