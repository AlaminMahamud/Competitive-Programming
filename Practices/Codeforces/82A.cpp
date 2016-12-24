#include <iostream>

using namespace std;

void func(int n){
    int a,b,c,d,e,f,g;
    
    int ntotal=0,ptotal=0,number=0,it,sheldon,leonard,penny,rajesh,howard;
    
    for(int i=1; ntotal<n; i*=2){
        it = 5*i;
        ptotal = ntotal;
        ntotal += it;
        number = i;
    }

    sheldon = ptotal+number;
    leonard = sheldon+number; 
    penny   = leonard+number;
    rajesh  = penny  +number; 
    howard  = rajesh +number;

    if(n>ptotal && n<=sheldon) cout << "Sheldon" <<endl;
    else if(n>sheldon && n<=leonard) cout << "Leonard" <<endl;
    else if(n>leonard && n<=penny) cout << "Penny" <<endl;
    else if(n>penny && n<=rajesh) cout << "Rajesh" <<endl;
    else if(n>rajesh && n<=howard) cout << "Howard" <<endl;

}

int main(){

    int n;
    cin >>n;
    func(n);

    return 0;
}