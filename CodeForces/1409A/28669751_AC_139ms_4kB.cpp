#include <iostream>
#include <cmath>
#include <string> 
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin>>a>>b;
		int ans=abs(a-b);
		if(ans % 10 == 0) cout<< ans/10<<endl;
		else cout << ans/10 +1 <<endl;
	}
	return 0;
}