#include <bits/stdc++.h>
using namespace std;
int x,y;
int node[100][100];
int dp[100][100];
int record[100][100];
int Max;
int a=1;
int dfs(int xx,int yy){
    // cout << xx+1 << "," << yy+1 << endl;
    int top=0,down=0,left=0,right=0;
    if(dp[xx][yy]) return dp[xx][yy];
    // record[xx][yy] = 1;
    if(xx-1>=0 && xx-1<x && node[xx][yy] > node[xx-1][yy]) top = dfs(xx-1,yy);
    if(xx+1>=0 && xx+1<x && node[xx][yy] > node[xx+1][yy]) down = dfs(xx+1,yy);
    if(yy-1>=0 && yy-1<y && node[xx][yy] > node[xx][yy-1]) left = dfs(xx,yy-1);
    if(yy+1>=0 && yy+1<y && node[xx][yy] > node[xx][yy+1]) right = dfs(xx,yy+1);
    dp[xx][yy] = max(dp[xx][yy],max(top,max(down,max(left,right)))) + 1;
    Max = max(Max,dp[xx][yy]);
    return dp[xx][yy];
}
int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s >> x >> y;
        Max=-1;
        memset(node,0,sizeof(node));
        memset(record,0,sizeof(record));
        memset(dp,0,sizeof(dp));
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cin >> node[i][j];
            }
        }
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                if(!dp[i][j]){
                    dp[i][j] = max(dp[i][j],dfs(i,j));
                }
        cout << s << ": " << Max << endl;
    }
}
