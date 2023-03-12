#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n;
		cin >> n;
		char s[n][n];
		int ax,ay,bx,by,t=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> s[i][j];
				if(s[i][j] == '*'){
					if(!t){
						ax=i;
						ay=j;
						t++;
					}
					else{
						bx=i;
						by=j;
					}
				}
			}
		}
		if(ax == bx){
			if(bx-1 >= 0){
				s[ax-1][ay] = '*';
				s[bx-1][by] = '*';
			}
			else{
				s[ax+1][ay] = '*';
				s[bx+1][by] = '*';
			}
		}
		else if(ay == by){
			if(by-1 >= 0){
				s[ax][ay-1] = '*';
				s[bx][by-1] = '*';
			}
			else{
				s[ax][ay+1] = '*';
				s[bx][by+1] = '*';
			}
		}
		else{
			s[ax][by] = '*';
			s[bx][ay] = '*';
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout << s[i][j];
			}
			cout << endl;
		}
	}
}