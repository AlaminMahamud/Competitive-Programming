#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList;
    myList.push_back(10);

    while(myList.back() != 0)
        myList.push_back(myList.back()-1);
    
    cout << "My List Contains "<<endl;
    
    for(list<int> :: iterator it=myList.begin(); it!=myList.end(); it++)
        cout << " " <<*it;
    cout << endl;

    return 0;
}