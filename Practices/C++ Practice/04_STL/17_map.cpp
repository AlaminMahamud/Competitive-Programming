#include<string.h>
#include<iostream>
#include<map>
#include<utility>

using namespace std;

int main()
{
    map<string,int> Employees;
  
//Examples of assigning Map Container contents
  
  //1) Assignment using Array Index notation
  Employees["Mike.C"] = 5234;
  Employees["Charlie M."] = 3374;

  //2)Assignment using member function insert() and STL Pair
  Employees.insert(std::pair<string,int>("David D.", 1923));
  Employees.insert(std::pair<string,int>("David G.", 1978));


}