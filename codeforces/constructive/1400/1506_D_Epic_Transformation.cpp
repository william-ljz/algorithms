#include <iostream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
int st[201000];
int b[201000];
int main(){
    int T;
    cin>>T;
    int n, top, m, idx=0;
    while(T--)
    {
        scanf("%d", &n);
        map<long long,int>ma;
        int p = 0;
        long long x;
        for(int i=0;i<n;i++)
        {
            scanf("%lld", &x);
            ma[x]++;
            p = max(p,ma[x]);
        }
        if (n-p < p)
        printf("%d\n", 2*p - n);
        else 
        {
            printf("%d\n", ((n-2*p)%2));
        }
    }
}