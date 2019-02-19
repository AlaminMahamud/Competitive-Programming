#include <iostream>
#include <vector>
#include <string>

using namespace std;

main()
{
    vector<string> SS;
    SS.push_back("The Number is 10");
    SS.push_back("The Number is 20");
    SS.push_back("The Number is 30");

    cout << "Loop By index : " <<endl;
    int ii;

    cout<<endl<<"Reverse Iterator : "<<endl;
    vector<string> :: reverse_iterator rii;
    for(rii=SS.rbegin(); rii!=SS.rend(); ++rii);
}