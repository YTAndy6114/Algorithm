#include <bits/stdc++.h>
using namespace std;
vector<int> vec[200001];
int p[200001];
void dfs(int node , int n){
	p[node] = n;
	for(int x : vec[node]){
		if(x != n){
			dfs(x,node);
		}
	}
}
int main(){
	int n;
	cin >> n;
	for(int i=2;i<=n;i++){
		int a;
		cin >> a;
		vec[a].push_back(i);
		vec[i].push_back(a);
	}
	dfs(1,-1);
	stack<int> st;
	while(n != -1){
		st.push(n);
		n = p[n];
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}

