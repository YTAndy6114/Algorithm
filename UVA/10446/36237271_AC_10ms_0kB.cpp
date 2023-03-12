#include <bits/stdc++.h>
using namespace std;
unsigned long long dp[62][61];
unsigned long long trip(int n,int back){
    if(n<=0 || n==1) return 1;
    if(!dp[n][back])
        for(int i=1;i<=back;i++)
            dp[n][back] += trip(n-i,back);
    return dp[n][back] + 1;
}
int main()
{
    int a,b;
    int Case = 1;
    while(cin >> a >> b){
        if(a<=61 && b<=60){
            memset(dp,0,sizeof(dp));
            printf("Case %d: %llu\n",Case++,trip(a,b));
        }
    }
}
