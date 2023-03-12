#include <bits/stdc++.h>
using namespace std;
int a[200000];
int b[200000];
int main(){
	int n , m;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<m;i++){
		cin >> b[i];
		cout << upper_bound(a,a+n,b[i]) - a << " ";
	}
}