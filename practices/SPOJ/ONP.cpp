#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cctype>
using namespace std;


int main(){
    int t;
    cin >>t;
    string st;
    while(t-->0){
        cin >> st;
        queue<char> q;
        stack<char> s;
        int size = st.size();
        for(int i=0; i<size; i++){
            if(isalpha(st[i])) q.push(st[i]);
            else if(st[i]==')') {
                q.push(s.top());
                s.pop();
                s.pop();
            }else
                s.push(st[i]);

        }
        while(!q.empty()){
            cout << q.front();
            q.pop();
        }
        cout << endl;
    }

    return 0;
}
