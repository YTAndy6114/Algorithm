#include <iostream>
using namespace std;
int n,x;
int main(){
    cin >> n;
    int ans = -1;
    bool b = true;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x > ans + 1 && b){
            ans = i+1;
            b=false;
        }
        if(b) ans = max(ans,x);
    }
    if(b) cout << -1 << endl;
    else cout << ans << endl;
}
/*
4
0 1 2 1
*/