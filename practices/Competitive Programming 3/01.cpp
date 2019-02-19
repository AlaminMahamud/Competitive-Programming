// 1:21
// 1:41
// 2:05
// 2:

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int d[2*n][2];
    double curr,min=0;

    for(int i=0;i<2*n; i++)
        cin>>d[i][0]>>d[i][1];
     
    for(int i=0; i<(2*n)-1; i++)
    {
        curr=1000000000;
        for(int j=i+1; j<2*n; j++)
        {
            int a = (d[i][0]-d[j][0]);
            int b = (d[i][1]-d[j][1]);
            double c = sqrt(a*a +b*b);
            cout << endl << j << endl;
            cout << curr <<"\t"<<c << "\t" << min<<endl;
            if(c<curr)
                curr=c;
        }
            min += curr;
    }
    cout<< min<<endl;
    return 0;
}
