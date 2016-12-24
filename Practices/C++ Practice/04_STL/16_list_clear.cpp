// Clearing Lists
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> myList; 
    list<int> :: iterator it;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    cout << "myList contains: " <<endl;
    for(it=myList.begin(); it!=myList.end(); it++)
        cout << " "<<*it;
    
    myList.clear();
    myList.push_back(101);
    myList.push_back(202);

    cout << "\nmy List Contains:";
    for(it=myList.begin(); it!=myList.end(); ++it)
        cout << " " << *it;
    cout << endl;
    return 0;
}