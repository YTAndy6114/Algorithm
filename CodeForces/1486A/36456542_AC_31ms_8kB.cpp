#include <iostream>
using namespace std;
int n,T;
long long int a , b;
int main(){
    cin >> T;
    while(T--){
        b = 0;
        cin >> n;
        bool ans = true;
        for(int i=0;i<n;i++){
            cin >> a;
            if(b+a < i) ans = false;
            else b += a-i;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    
}
