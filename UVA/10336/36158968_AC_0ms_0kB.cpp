#include<bits/stdc++.h>
using namespace std;
int t,n,m,World=1;
int mx[4]={-1,1,0,0};
int my[4]={0,0,-1,1};
char word[1000][1000];
char temp;
int ans[26];
void dfs(int x,int y){
    if(x>=0 && x<=n && y>=0 && y<=m && word[x][y] != '1'){
        word[x][y] = '1';
        for(int i=0;i<4;i++){
            int ax = x+mx[i] , ay = y+my[i];
            if(word[ax][ay] == temp) dfs(ax,ay);
        }
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        int total = n*m;
        memset(ans,0,sizeof(ans));
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<m;j++)
                word[i][j] = s[j];
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[i][j] != '1'){
                    ans[word[i][j]-'a']++;
                    temp = word[i][j];
                    dfs(i,j);
                }
            }
        }
        cout << "World #" << World++ << "\n";
        while(total--){
            if(total == 0) break;
            for(int i=0;i<26;i++){
                if(total == ans[i])
                    cout << char('a'+i) << ": "<< ans[i] << "\n";
            }
        }
    }
}
/*
2
4 8
ttuuttdd
ttuuttdd
uuttuudd
uuttuudd
9 9
bbbbbbbbb
aaaaaaaab
bbbbbbbab
baaaaacab
bacccccab
bacbbbcab
bacccccab
baaaaaaab
bbbbbbbbb

*/