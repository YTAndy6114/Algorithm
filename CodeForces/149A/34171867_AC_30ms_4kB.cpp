#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(){
	int n;
	cin >> n;

	int x[12];
	for(int i=0;i<12;i++){
		cin >> x[i];
	}
	sort(x,x+12,cmp);
	if(!n) cout << 0 << "\n";
	else{
		for(int i=0,sum=0;i<12;i++){
			sum += x[i];
			if(sum >= n){
				cout <<  i+1 << "\n";
				return 0;
			}
		}
		cout << -1 << "\n";
	}
}