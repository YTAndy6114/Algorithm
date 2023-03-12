#include <bits/stdc++.h>
using namespace std;
int g[100][100] , record[100] , n;
vector<int> ans;
void dfs(int x){
    for(int i=1;i<=n;i++){
        if(g[x][i] & !record[i]){
            record[i] = 1;
            dfs(i);
        }
    }
}
int main(){
    n;
    while(cin >> n && n){
        int x,y,nums;
        memset(g,0,sizeof(g));
        while(cin >> x && x)
            while(cin >> y && y) g[x][y] = 1;
        cin >> nums;
        while(nums--){
            int target;
            cin >> target;
            memset(record,0,sizeof(record));
            ans.clear();
            dfs(target);
            for(int i=1;i<=n;i++)    
                if(!record[i])
                    ans.push_back(i);
            cout << ans.size();
            for(int i=0;i<ans.size();i++)    
                cout << " " << ans[i];
            cout << endl;
        }
    }
}