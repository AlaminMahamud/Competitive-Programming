#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[2*n][2];
    int b[2*n][2*n];
    for(int i=0; i<(2*n); i++)
        {
            cin >> a[i][0] >> a[i][1];
        }

    for(int i=0; i<2*n; i++)
        {
            for(int j=i+1; j<(2*n); j++)
                {
                 b[i][j] = abs(a[i][0] - a[j][0]);
                }
        }

    for(int i=0; i<2*n-1;i++)
        {
            cout << b[i] << endl;
        }


    return 0;
}
