#include <iostream>
using namespace std;
int a,b,n,s;
int t;
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> n >> s;
        int Max = min(a,s/n);
        s-= n*Max;
        if(s <= b) cout << "YES\n";
        else cout << "NO\n"; 
    }
}
