#include <iostream>
#include <algorithm>
using namespace std;
int T,n;

int main(){
    cin >> T;
    while(T--){
        cin >> n;
        int x[n];
        for(int i=0;i<n;i++) cin >> x[i];
        sort(x,x+n);

        int ans = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            count++;
            if(count >= x[i]){
                count = 0;
                ans++;
            }
        }
        cout << ans << endl;
    }
}

// 2
// 3
// 1 1 1
// 5
// 2 3 1 2 2
// 
