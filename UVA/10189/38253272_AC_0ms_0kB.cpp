#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int F = 1;
	int move[8][2] = {{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
	bool b = false;
	while(cin>>n>>m && n+m){
		if(b) cout << endl;
		else b = !b;
		cout << "Field #" << F++ << ":\n";	
		string s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j] == '*') cout << "*";
				else{
					int ans = 0;
					for(int k=0;k<8;k++)
						if(i+move[k][0]>=0 && i+move[k][0]<n && j+move[k][1]>=0 && j+move[k][1]< m && s[i+move[k][0]][j+move[k][1]] == '*') ans++;
					cout << ans;
				}
			}
			cout << endl;
		}
	}
}
