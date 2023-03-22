#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;
int q[301000];
int main(){
    int T;
    cin>>T;
    int n, x;
    while(T--)
    {
        int tt=-1, hh=0;
        scanf("%d", &n);
        scanf("%d", &x);
        q[++tt] = x;
        for(int i=1; i<n; i++)
        {
            scanf("%d", &x);
            if(hh==tt)
            {
                if(q[hh]<x)
                {
                    q[hh] = min(q[hh],x);
                }
                else 
                {
                    q[++hh] = x;
                }
            }
            else 
            {
                q[++hh] = x;
                while(tt+1<hh)
                {
                    if(q[hh-1]<q[hh])
                    {
                        q[hh-1] = max(q[hh-1], q[hh]);
                        hh--;
                    }
                    else 
                    {
                        break;
                    }
                }
                if(q[hh]>q[tt])
                {
                    q[hh] = min(q[hh],q[tt]);
                    hh--;
                }
            }
        }
        if(hh>tt)
        {
            puts("NO");
        }
        else 
        {
            puts("YES");
        }
    }
}