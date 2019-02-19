#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int k, ans, v;
    while(scanf("%d", &k) != EOF){
        ans = 0;
        while(k--){
            scanf("%d", &v);
            ans+=v;
        }
        printf("%d", ans);
    }
}