
#include <iostream>
#include<algorithm>
#include<queue>
#include<map>
#define ll long long
int a[100];
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        scanf("%d", &n);
        ll sum = 0;
        ll sumodd = 0;
        for(int i=1 ; i<=n ;i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
            if(i&1)
            sumodd += a[i];
        }
        if(sumodd*2<=sum)
        {
            for(int i=1;i <=n ; i++)
            if(i&1)
            printf("1 ");
            else 
            printf("%d ", a[i]);
        }
        else 
        {
            for(int i=1;i <=n ; i++)
            if((i&1)==0)
            printf("1 ");
            else 
            printf("%d ", a[i]);
        }
        puts("");
    }
    return 0;
}