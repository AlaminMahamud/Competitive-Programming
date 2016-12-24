#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    string a, b, c;
    a = "this is a string";
    b = a;
    c = a + " "+ b; 
    cout << c <<endl;
    printf("%s\n", c.c_str());
    cout << c.size() << endl; // length print
    for(int i=0; i<c.size(); i++)
        cout << c[i] << endl;
    return 0;
}

//to keep string in vector 
//use

//vector<string> vs;