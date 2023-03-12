#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin>>s;
		if(s.length() > 10){
			cout << s[0] << s.size()-2 << s[s.size()-1] << endl; 
		}
		else {
				cout << s << endl;
		}
	}
	return 0;
}