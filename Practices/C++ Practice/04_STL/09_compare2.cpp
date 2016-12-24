struct data
{
    char name[100];
    int height, weight;
    long long income;
};

bool operator < (const data &b) const{
    if(income==b.income)
        if(height==b.height)
            if(weight==b.weight)
                return strlen(name)<strlen(b.name);
            else
                return weight < b.weight;
        else
            return height > b.height
    else    
        return income>b.income;
}