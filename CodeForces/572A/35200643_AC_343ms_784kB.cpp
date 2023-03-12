#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,l;
	cin >> n >> m >> k >> l;
	int a[n],b[m];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<m;i++)
		cin >> b[i];
	if(a[k-1] >= b[m-l])
		cout << "No\n";
	else
		cout << "Yes\n";
}