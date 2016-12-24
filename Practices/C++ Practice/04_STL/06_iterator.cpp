// vector<int> :: iterator it;
// vector<double> :: iterator j;
#include <vector>
#include <iostream>
#include <iterator>
#include <cstdio>

using namespace std;

int main()
{
    vector<int> v; 
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int> :: iterator i;
    for(i = v.begin(); i<v.end(); i++)
    {
        printf("%d\n", *i);
    }
    return 0;
}