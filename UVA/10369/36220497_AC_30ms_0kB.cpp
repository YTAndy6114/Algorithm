#include <bits/stdc++.h>
#define dis(a,b,c,d) sqrt((a-c)*(a-c)+(b-d)*(b-d))

using namespace std;
int n,S,P;
struct node{
    int x,y;
    double dis;
};
vector<pair<int,int>> v(10000);
vector<node> Node;
void Kruskal(){
    int parent[P],count=0;
    double ans = 0;
    for(int i=1;i<=P;i++)
        parent[i] = i;
    for(int i=0;i<Node.size();i++){
        int x = Node[i].x , y = Node[i].y;
        while(parent[x] != x) x = parent[x];
        while(parent[y] != y) y = parent[y];
        if(x!=y){
            parent[x] = y;
            ans = max(ans,Node[i].dis);
            count++;
            if(count==P-S)break;
        }
    }
    printf("%.2f\n",ans);
}
bool cmp(node a,node b){
    return a.dis < b.dis;
}
int main(){
    cin >> n;
    int xx=1;
    while(n--){
        v.clear();
        Node.clear();
        cin >> S >> P;
        for(int i=0;i<P;i++){
            cin >> v[i].first >> v[i].second;
        }
        for(int i=0;i<P-1;i++){
            for(int j=i+1;j<P;j++){
                Node.push_back(node{i+1,j+1,dis(v[i].first,v[i].second,v[j].first,v[j].second)});
            }
        }
        sort(Node.begin(),Node.end(),cmp);
        Kruskal();
    }
}
/*
1
2 4
0 100
0 300
0 600
150 750

212.13
*/
