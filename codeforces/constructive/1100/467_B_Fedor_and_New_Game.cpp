#include <iostream>


using namespace std;
int a[1010];
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0; i<=m; i++)
    scanf("%d", &a[i]);
    int num = 0;
    for(int i=0; i < m ; i++)
    {
        int res = 0;
        for(int j=0; j<n; j++)
        {
            int x = a[m] >> j & 1;
            int y = a[i] >> j & 1;
            res += (x!=y);

        }
        num += (res <= k);
    }
    cout<<num<<endl;
}