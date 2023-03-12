#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n,i=3,k=0,b,t,f=1;
	string s;
	cin >> n;
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	while(v.back() < n){
		v.push_back(v[i-1]+v[i-2]);
		i++;
	}
	for(i--;i>=0;i--){
		while(n>=v[i]){
			n-=v[i];
			s += to_string(v[i]) + " ";
			k++;
			b=i;
			if(f){
				t=i;
				f=0;
			}
			if(k==3) break;
		}
	}
	if(k==3) cout << s << endl;
	else if(k==2 & b >=2){
		cout << v[t] << " " << v[b-1] << " " << v[b-2] << endl;
	}
	else cout << "I'm too stupid to solve this problem" << endl;
}