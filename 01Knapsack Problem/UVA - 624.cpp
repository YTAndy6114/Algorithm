#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,W;int t;
	while(cin>>W>>t){
		int C[W+1] , v[t] , w[W+1];
		bool p[t][W+1];
		memset(C,0,sizeof(C));
		memset(p,0,sizeof(p));		
		vector<int> ans;
		for(int i=0;i<t;i++)
			cin>>v[i];
		for(int i=0;i<t;i++){
			for(int j=W;j>=v[i];j--){
				if(C[j-v[i]] + v[i] > C[j] || (C[j-v[i]] + v[i] == C[j] && w[j-v[i]] + 1 > w[j])){
					C[j] = C[j-v[i]] + v[i];
					p[i][j] = 1;
					w[j] = w[j-v[i]] + 1;
				}
			}
		}
		for(int i=t-1,j=W;i>=0;i--){
			if(p[i][j]){
				j-=v[i];
				ans.push_back(v[i]);
			}
		}
		reverse(ans.begin(),ans.end());
		for(auto c:ans) cout << c << " ";
		cout << "sum:" << C[W] << endl; 
	}
}