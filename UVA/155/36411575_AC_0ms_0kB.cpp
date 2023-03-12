#include <bits/stdc++.h>
using namespace std;
struct node{
    int x,y;
    node(int a, int b){
        x = a;
        y = b;
    }
};
int dfs(int k,node a,node b){
    if(!k) return 0;
    node left_top(b.x - k , b.y - k);
    node right_down(b.x + k , b.y + k);
    int result = 0;
    if(a.x >= left_top.x && a.x <= right_down.x && a.y >= left_top.y && a.y <= right_down.y)
        result++;
    result += dfs(k/2,a,left_top);
    result += dfs(k/2,a,node{left_top.x,right_down.y});
    result += dfs(k/2,a,node{right_down.x,left_top.y});
    result += dfs(k/2,a,right_down);
    return result;
}
int main(){
    int k,ox,oy;
    while(cin >> k >> ox >> oy && (k+ox+oy)){
        node a(ox,oy);
        node b(1024,1024);
        cout << setw(3) << dfs(k,a,b) << endl;
    }
}

