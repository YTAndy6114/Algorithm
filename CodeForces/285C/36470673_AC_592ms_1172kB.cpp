#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int n;
int main(){
    cin >> n;
    int x[n];
    long long int ans = 0;
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x,x+n); // 0 3 
    for(int i=0,j=1;i<n;i++){
        ans += abs(x[i]-j++);
        // cout << "abs(x[i]-j):" << abs(x[i]-j) << endl;
    }
    cout << ans << endl;
}