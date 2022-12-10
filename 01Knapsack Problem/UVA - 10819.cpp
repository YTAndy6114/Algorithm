#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	int N,W;cin>>W>>N;
	int weight[N] , value[N] , C[W+1];
	memset(C,0,sizeof(C));
	for(int i=0;i<N;i++)
		cin >> weight[i] >> value[i];
	for(int i=0;i<N;i++){
		for(int j=W;j>=weight[i];j--){
			if(C[j-weight[i]] + value[i] > C[j]){
				C[j] = C[j-weight[i]] + value[i];
			}
		}
	}
	cout << C[W] << endl;
}