#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
#include <iomanip>
#define sc(a) scanf("%d",&a)
#define mem(a,b) memset(a,b,sizeof(a))
#define dis(i,j) sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]))
using namespace std;
int T,N,xa=0;
float x[30000],y[30000];
int fa[30000];
struct Node
{
    int x,y;
    double dis;
};
bool cmp(Node a,Node b){
    return a.dis < b.dis;
}

vector<Node> v;
void Kruscal(){
    float ans=0;
    int k=0;
    for(int i=0;i<v.size();i++){
        int x = v[i].x;
        int y = v[i].y;
        while(fa[x] != x){ x = fa[x];}
        while(fa[y] != y){ y = fa[y];}
        if(x!=y){
            fa[x] = y;
            ans += v[i].dis;
            k++;
        }
        if(k == N-1) break;
    }
    cout << setprecision(2) << fixed << ans << endl;
}
void solve(){
    mem(x,0);
    mem(y,0);
    mem(fa,0);
    v.clear();
    for(int i=1;i<=N;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            v.push_back(Node{i,j,dis(i,j)});
        }
    }
    sort(v.begin(), v.end() , cmp);
    for(int i=1;i<=N;i++) fa[i] = i;
    Kruscal();
}
int main(){
    sc(T);
    while(T--){
        sc(N);
        solve();
        if(T) cout << endl;
    }
}
    /*
    11.21

    6.00

    27.39

    */
