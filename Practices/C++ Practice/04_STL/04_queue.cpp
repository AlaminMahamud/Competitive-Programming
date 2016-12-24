#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}