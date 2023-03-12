#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v(30);
vector<pair<int,int>> vv;
bool record[30][1001];
int dp[1001];
int main(){
    int t,w,n;
    int c = 0;
    while(cin >> t >> w >> n){
        if(c++) cout << endl;
        memset(record,false,sizeof(record));
        memset(dp,0,sizeof(dp));
        v.clear();
        vv.clear();
        for(int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
            v[i].first *= (3*w);
        }

        for(int i=0;i<n;i++){
            for(int j=t;j>=v[i].first;j--){
                if(dp[j-v[i].first] + v[i].second > dp[j]){
                    dp[j] = dp[j-v[i].first] + v[i].second;
                    record[i][j] = true;
                }
            }
        }
        cout << dp[t] << "\n";

        

        for(int i=n-1,j=t;i>=0;i--){
            if(record[i][j]){
                int x = v[i].first/3/w , y = v[i].second;
                vv.push_back({x,y});
                j-=v[i].first;
            }
        }
        cout << vv.size() << endl;

        for(int i=vv.size()-1;i>=0;i--){
            cout << vv[i].first << " " << vv[i].second << "\n";
        }
    }
}