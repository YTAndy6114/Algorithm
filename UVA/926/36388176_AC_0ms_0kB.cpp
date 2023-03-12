#include <bits/stdc++.h>
using namespace std;
int n, m, o, fx, fy, ex, ey;
int x,y;
char s;
long long int dp[31][31];
string st[31][31];
// 1 = Can't up
// 2 = Can't left
int main(){
    cin >> n;
    while(n--){
        cin >> m >> fx >> fy >> ex >> ey >> o;
        memset(dp,0,sizeof(dp));
        memset(st,0,sizeof(st));

        for(int i=0;i<o;i++){
            cin >> x >> y >> s;
            if(s == 'W') st[x][y] += "CU ";
            if(s == 'E') st[x+1][y] += "CU ";
            if(s == 'S') st[x][y] += "CL ";
            if(s == 'N') st[x][y+1] += "CL ";
        }
        // for(int i=1;i<=m;i++){
        //     for(int j=1;j<=m;j++){
        //         if(st[i][j] == "") cout << setw(6) << "space" << " ";   
        //         else cout << setw(6) << st[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        dp[fx][fy] = 1;
        for(int i=fx;i<=ex;i++){
            for(int j=fy;j<=ey;j++){
                if(st[i][j].find("CU") == string::npos) dp[i][j] += dp[i-1][j];
                if(st[i][j].find("CL") == string::npos) dp[i][j] += dp[i][j-1];
            }
        }
        // for(int i=1;i<=m;i++){
        //     for(int j=1;j<=m;j++){
        //         cout << setw(3) << dp[i][j] << " ";   
                
        //     }
        //     cout << endl;
        // }
        cout << dp[ex][ey] << endl;
    }
}
/*
2
3
1 1
3 3
2
2 3 S
2 2 W
3
1 1
3 3
0

*/