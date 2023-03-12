#include <bits/stdc++.h>
using namespace std;

using namespace std;
string s, res[35];
int n;

void dfs(int depth, int start){
    if(depth == n){
        for(int i=0;i<n;i++){
            cout << res[i];
        }
        cout<<"\n";
        return;
    }
    
    bool used[26];
    memset(used,false,sizeof(used));
    

    for(int i=start ; i<s.size() ; i++){
        if(!used[s[i]-'a']){
            used[s[i]-'a']=true;
            res[depth] = s[i];
            dfs(depth+1, i+1);
        }
    }
}

int main(){
    while(cin >> s >> n){
        sort(s.begin(), s.end());
        dfs(0, 0);
    }
}
