#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool is_hello(string s){
    
    if(s.size() < 5) return false;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='h' && !(s[i+1]=='e' || s[i+1]=='h'))
            return false;

        else if(s[i]=='e' && !(s[i+1]=='e' || s[i+1]=='l'))
            return false;

        else if(s[i]=='l' &&  !(s[i+1]=='o' || s[i+1]=='l'))
            return false;
        
        else if(s[i]=='o' && !(s[i-1]=='l' && s[i-2]=='l'))
            return false;
        
        else if(s[i]=='o' && (s[i-1]=='l' && s[i-2]=='l'))
            return true;
        
    }
    return true;
}

bool is_hello3(string s){
    string t="";
    bool flag1,flag2,flag3;
    flag1 = flag2 = flag3 = false;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h' && (s[i+1]=='e')){
            if(!flag1 && !flag2 && !flag3){
                t+=s[i];
                flag1 = true;   
            }
        }

        else if(s[i]=='e' && (s[i+1]=='l')){
            if(flag1 && !flag2 && !flag3){
                t+=s[i];
                flag2 = true;   
            }
        }

        else if(s[i]=='l' &&  (s[i+1]=='l') && (s[i+2]=='o'))
        {
            if(flag1 && flag2 && !flag3){
                t=t+s[i]+s[i+1]+s[i+2];
                flag3 = true;   
            }
        }
        
    }
    cout <<t<<endl;

    if(t=="hello")
        return true;
    else 
        return false;
}

bool is_hello2(string s){
    string t="";
    for(int i=0; i<s.size(); i++){
        if(
            s[i] == 'h' ||
            s[i] == 'e' ||
            s[i] == 'l' ||
            s[i] == 'o' 
          )
          t+=s[i];
          else 
            continue;
    }
    
    cout << t << endl;

//if(t=="hello") return true;
    //else 
     if(is_hello3(t)){
        return true;
    }

    return false;

}

bool is_hello4(string s){
    bool flag1, flag2, flag3, flag4, flag5;
    flag1= flag2= flag3= flag4= flag5 = false;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
           if(!flag1 && !flag2 && !flag3 && !flag4 && !flag5){
               flag1 = true;
           }     
        }else if(s[i]=='e'){
           if(flag1 && !flag2 && !flag3 && !flag4 && !flag5){
               flag2 = true;
           }     
        }else if(s[i]=='l'){
           if(flag1 && flag2 && !flag3 && !flag4 && !flag5){
               flag3 = true;
           }else if(flag1 && flag2 && flag3 && !flag4 && !flag5){
               flag4 = true;
           }
        }else if(s[i]=='o'){
           if(flag1 && flag2 && flag3 && flag4 && !flag5){
               flag5 = true;
           }
        }
    }

    if(flag1 && flag2 && flag3 && flag4 && flag5)
        return true;
    else 
        return false;
}

int main(){
    string s;
    cin >> s;

    if (is_hello4(s)){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
    return 0;
}