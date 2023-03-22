#include <iostream>
#include<algorithm>
using namespace std;
int a[201000], b[201000];
int main(){
    int T,n;
    cin>>T;
    while(T--)
    {
        scanf("%d", &n);
        for(int i=1 ;i<=n ;i++)
        {
            scanf("%d", &a[i]);
        }
        int l=1e9, r=-1e9;
        for(int i=2;i<=n;i++)
        {
            int ml = (a[i]+a[i-1])/2;
            int mr = (a[i]+a[i-1]+1)/2;
            if(a[i-1]<a[i])
            {
                l=min(l, ml);
            }
            else if(a[i]<a[i-1])
            {
                r=max(r,mr);
            }
        }
        if(l<r){
           puts("-1");
        }
        else 
        {
            printf("%d\n", l);
        }
    }
}