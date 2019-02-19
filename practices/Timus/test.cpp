#include <iostream>
using namespace std;

int  main()
{
	int k=1,n;
	cin>>n;
	int sum=0;
	for(int i=1; i<=n;i++)
	{
	    if(i>=2)
            cout <<"+\n(";
		for(int j=1;j<=i;j++)
		{
            if(j==1)
                cout << k++;
            else
                cout <<"+"<<k++;
		}
		if(i>=2)
            cout <<")";
	}
	return 0;
}
