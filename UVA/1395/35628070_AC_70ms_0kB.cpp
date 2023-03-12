#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
struct Node
{
    int x,y,v;
};
bool cmp(Node a,Node b){
    return a.v < b.v;
}
int main(){
    int n,m;
    while(cin>>n>>m && n){
        if(!m){cout << -1 << endl; continue;}
        int record[n+1];

        vector<Node> v1;
        loop(m){
            int x,y,v;
            cin>>x>>y>>v;
            v1.push_back(Node{x,y,v});
        }
        sort(v1.begin(), v1.end() , cmp);
        bool b = false;
        bool c = false;
        int Min = INT_MAX;
        for(int i=0;i<=m-n+1;i++){
            for(int k=1;k<=n;k++) record[k]=k;
            record[v1[i].x] = v1[i].y;
            int count=1,temp=v1[i].v;
            for(int j=i+1;j<m;j++){
                c = true;
                int x=v1[j].x,y=v1[j].y;
                while(record[x]!=x) x = record[x];
                while(record[y]!=y) y = record[y];
                if(x!=y){
                    count++;
                    record[x] = y;
                    if(count==(n-1)){
                        b=true;
                        Min = min(Min , v1[j].v-temp);
                        break;
                    }
                }
            }
        }
        if(!c && n==2) cout << 0 << endl;
        else if(!b) cout << -1 << endl;
        else cout << Min << endl;
    }
}
// 4 5