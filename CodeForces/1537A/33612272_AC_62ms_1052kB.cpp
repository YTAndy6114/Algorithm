#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n-- > 0){
		int m , temp , sum = 0;
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> temp;
			sum += temp;
		}
		if(sum == m) cout << 0 << endl;
		else if(sum > m) cout << sum - m << endl;
		else cout << 1 << endl;
	}
}