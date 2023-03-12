#include <bits/stdc++.h>
using namespace std;
long long int dp[20][20];
int n,v;
long long int a(int i,int j){
    long long int x=0,y=0;
    if(i==n && j==1) return v;
    if(dp[i][j]) return dp[i][j];
    if(i>=j){
        if(i<n)
            for(int k=i+1;k<=n;k++)
                x = max(x,a(k,1)+a(k,j));
        if(j>0)
            for(int k=1;k<j;k++)
                y = max(y,a(i,k)+a(n,k));
        return dp[i][j] = x+y;
    }
    else{
        for(int k=i;k<j;k++)
            x = max(x,a(i,k)+a(k+1,j));
        return dp[i][j] = x;
    }
}
int main()
{
    int Case = 1;
    while(cin >> n >> v){
        memset(dp,0,sizeof(dp));
        cout << a(1,n) << endl;
    }
}
