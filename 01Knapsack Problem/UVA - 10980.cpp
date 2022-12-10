#include <bits/stdc++.h>
using namespace std;
int main(){
	double one;int t,tt=1;
	while(cin>>one>>t){
		cout << "Case " << tt++ << ":\n";
		int weight[t];
		double value[t];
		for(int i=0;i<t;i++) cin>>weight[i]>>value[i];
		double C[101];
		for(int i=0;i<=100;i++) C[i] = one * i;
		// cout << "C:\n";
		// for(int i=1;i<=100;i++) cout << C[i] << endl;
		// cout << "END\n";
		for(int i=0;i<t;i++){
			int w = weight[i];
			double v = value[i];
			for(int j=0;j<=100-w;j++){
				for(int k=1;k<=w;k++){
					C[j+k] = min(C[j+k] , C[j]+v);
				}
			}
		}
		cin.ignore();
		string s;getline(cin,s);
		stringstream ss(s);
		int nn;
		while(ss>>nn){
			cout << "Buy " << nn <<" for $" << fixed << setprecision(2) << C[nn] << endl;
		}
	}
}