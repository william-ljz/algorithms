
#include <iostream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int num0=n;
    int num1=(m+1)/2;
    if(n-m > 1 || (num1 - num0)>1)
    {
        puts("-1");
        return 0;
    }
    if(n>=m)
    {
        num0 = n;
        num1 = m;
        printf("0");
        num0--;
        while(num0&&num1)
        {
            printf("1");
            printf("0");
            num0--;
            num1--;
        }
        if(num1)
        {
            printf("1");
        }
    }
    else 
    {
        num1 = m;
        num0 = n;
        int x = m - (n+1);
        printf("1");
        num1--;
        if(x)
        {
            printf("1");
            x--;
            num1--;
        }

        while(num0&&num1)
        {
            printf("0");
            printf("1");
            if(x)
            {
                printf("1");
                x--;
                num1--;
            }
            num0--;
            num1--;
        }
    }
    
}