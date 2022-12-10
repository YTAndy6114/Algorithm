#include <bits/stdc++.h>
using namespace std;
void solve(){
	int N;cin>>N;
	int weight[N],value[N];
	for(int i=0;i<N;i++)
		cin >> value[i] >> weight[i];
	int t;cin>>t;
	int ans = 0;
	for(int i=0;i<t;i++){
		int W;cin>>W;
		int C[W+1];
		memset(C,0,sizeof(C));
		for(int i=0;i<N;i++){
			for(int j=W;j>=weight[i];j--){
				if(C[j-weight[i]] + value[i] > C[j]){
					C[j] = C[j-weight[i]] + value[i];
				}
			}
		}
		ans += C[W];
	}
	cout << ans << endl;
}
int main(){
	int T;cin>>T;
	while(T--){
		solve();
	}
}