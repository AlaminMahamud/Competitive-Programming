#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,t="";
    cin>>s;
    int size = s.size();
    bool flag = false;

    for(int i=0; i< s.size(); i++){
        for(int j=i-1;j>=0; j--){
            if(s[j]==s[i]){
                flag = true;
                j=-1;
            }
        }
        if(!flag){
            t+=s[i];
        }else{
            flag=false;
        }

    }

    if(t.size()%2==0) 
        cout << "CHAT WITH HER!" <<endl;
    else 
        cout << "IGNORE HIM!" <<endl;

}