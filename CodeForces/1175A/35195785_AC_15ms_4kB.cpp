#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		long long int x,k,ans=0;
		cin >> x >> k;
		while(x!=0){
			if(x%k==0){
				x/=k;
				ans++;
			}
			else{
				ans+=x%k;
				x-=(x%k);
			}
		}
		cout << ans << "\n";
	}
}
