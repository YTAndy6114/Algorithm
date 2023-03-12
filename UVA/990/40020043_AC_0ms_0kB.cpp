#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,W,w,T;
	bool b = true;
	while(cin>>W>>w>>T){
		if(!b) 	cout << endl;
		b = false;
		int C[W+1] , weight[T] , value[T];
		bool P[T][W+1];
		memset(C,0,sizeof(C));
		memset(P,0,sizeof(P));
		for(int i=0;i<T;i++){
			cin>>weight[i]>>value[i];
			weight[i]*=3*w;
		}

		vector<pair<int,int>> ans;
		for(int i=0;i<T;i++){
			for(int j=W;j>=weight[i];j--){
				if(C[j-weight[i]] + value[i] > C[j]){
					C[j] = C[j-weight[i]] + value[i];
					P[i][j] = 1;
				}
			}
		}
		for(int i=T-1,j=W;i>=0;i--){
			if(P[i][j]){
				j -= weight[i];
				ans.push_back({weight[i]/3/w,value[i]});
			}
		}
		reverse(ans.begin(),ans.end());
		cout << C[W] << endl << ans.size() << endl;
		for(auto c : ans){
			cout << c.first << " " << c.second << endl;
		}
	}
}