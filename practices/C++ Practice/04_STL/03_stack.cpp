#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(100);
    st.push(200);
    st.push(300);

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}