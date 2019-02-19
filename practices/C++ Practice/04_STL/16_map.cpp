#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<int, string> Employees;

    // 1) Assignment using array index notation
    Employees[1234] = "Mike C.";
    Employess[3374] = "Charlie M.";

    cout << "Employees[3374]= "<<Employees[3374]<<endl;
    cout << "Map Size: " << Employees.size() << endl;

    for(map<int,string> :: iterator it = Employees.begin(); it++)
        cout << (*it).first << ": " << (*it).second << endl;
}