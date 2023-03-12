#include <bits/stdc++.h>
using namespace std;

int n;
int nums[13];
int record[13];
int ans[13];
void solve(int cur, int now){
	if(cur == 6){
		for(int i=0; i<6; i++){
			if(i<5) cout << ans[i] << " ";
			else cout << ans[i] << endl;
		}
	}
	else{
		for(int i=now; i<n;i++){
			if(!record[i]){
				record[i] = 1;
				ans[cur] = nums[i];
				solve(cur+1,i);
				record[i] = 0;
			}
		}
	}
}
int main(){
	int x = 0;
	while(cin >> n){
		if(!n) break;	
		if(!x) x = 1;
		else cout << "\n";
		for(int i=0;i<n;i++)
			cin >> nums[i];
		solve(0,0);
	}
}
