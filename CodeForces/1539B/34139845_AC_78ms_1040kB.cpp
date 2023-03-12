#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	string s;
	cin >> t >> n >> s;
	ll l[t+1];
	l[0] = 0;
	for(int i=1;i<=t;i++){
		l[i] = l[i-1] + (s[i-1]-'a')+1;
	}
	while(n--){
		int a,b;
		cin >> a >> b;
		
		cout << l[b] - l[a-1] << "\n";
		// a=3 b=7 => a[7] - a[2] = 3~7
	}
}