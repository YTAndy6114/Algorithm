#include <iostream>
#include <algorithm>
#include <vector>
// #define LOCAL
using namespace std;
typedef long long LL;
int main(){

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    LL n;
    while(cin>>n&&n!=-1){
        vector<vector<LL>> v(n+1,vector<LL>(2));
        v[0][0] = 0 , v[0][1] = 1;
        for(int i=1;i<=n;i++){
            v[i][0] = v[i-1][1];
            v[i][1] = v[i-1][0]*2 + v[i-1][1]-v[i-1][0] + 1;
        }
        cout << v[n][0] << " " << v[n][1] << endl;
    }
    
}
