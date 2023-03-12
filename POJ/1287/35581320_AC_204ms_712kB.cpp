#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
    int x;
    int y;
    int distance;
};  
bool cmp(struct Node a,struct Node b){
    return a.distance < b.distance;
}
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    int P,R,x=0;
    bool too_bad = false;
    while(cin >> P && P!=0){
        if(x) cout << endl;
        else x = 1;
        cin >> R;
        vector<Node> v;
        for(int i=0;i<R;i++){
            int x,y,distance;
            cin >> x >> y >> distance;
            v.push_back(Node{x,y,distance});
        }
        sort(v.begin(),v.end(),cmp);
        int b[P+1],ans=0;
        for(int i=1;i<=P;i++) b[i] = i;
        for(int i=0;i<R;i++){
            int x=v[i].x,y=v[i].y;
            while(b[x]!=x){
                x=b[x];
            }
            while(b[y]!=y){
                y=b[y];
            }
            if(x!=y){
                b[x] = y;
                ans += v[i].distance;
            }
        }
        cout << ans;
    }

}
/*
0
17
16
26
*/