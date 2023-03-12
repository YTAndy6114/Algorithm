#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <climits>
// #define LOCAL
using namespace std;
typedef long long LL;
int main(){

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    
    int n,ans=INT_MIN;cin>>n;
    vector<vector<int>> matrix(n+1,vector<int>(n,0)) , dp(matrix);
    for(int i=1;i<=n;i++) for(int j=0;j<n;j++) cin>>matrix[i][j];

    // create dp_table
    for(int i=1;i<=n;i++)
        for(int j=0;j<n;j++)
            dp[i][j] = dp[i-1][j] + matrix[i][j];

    // List all possible
    for(int i=1;i<=n;i++){
        // 從第i列開始建構的長方形
        for(int j=i;j<=n;j++){
            // 規定的第i列往下去延伸
            int sum = 0;
            for(int k=0;k<n;k++){
                // j是他的高度 k是他的寬度
                sum += dp[j][k] - dp[i-1][k];
                ans = max(ans,sum);
                if(sum<0) sum=0;
            }
        }
    }
    cout << ans << endl;

}
/*
1 10
44 497
346 542
1199 1748
1496 1403
1004 503
1714 190
1317 854
1976 494
1001 1960
0 0
*/