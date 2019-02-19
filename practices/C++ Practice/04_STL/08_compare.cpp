bool compare(data a, data b)
{
    if(a.income==b.income)
        if(a.height==b.height)
            if(a.weight==b.weight)
                return strlen(a.name) <strlen(b.name);
            else
                return a.weight < b.weight;
        else    
            return a.height > b.height;
    else
        return a.income>b.income;
}

/// Declare this function globally and use it sort for further use
sort(v.begin(), v.end(), compare);
