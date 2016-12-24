#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n,m,count_c;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        char a[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%c",&a[i][j]);
            }
        }
        cout<<"H";

        for(int i=0; i<n;i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                    printf("*");
                else
                    count_c=0;
                    for(int k=i-1;k<=i+1;k++)
                    {
                        for(int l=j-1;l<=j+1;l++)
                        {
                            if(k==i && l==j)
                                continue;
                            if(a[k][l]=='*')
                                count_c++;
                        }
                    }
                    printf("%d",count_c);
            }
            printf("\n");
        }

    }

    return 0;
}
