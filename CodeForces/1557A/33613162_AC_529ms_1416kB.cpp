#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-- > 0){
		int n;
		double sum = 0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum += a[i];
		}
		sort(a,a+n);
		sum-=a[n-1];

		cout << fixed << setprecision(7) << sum/(n-1) + a[n-1] << endl;
	}
}