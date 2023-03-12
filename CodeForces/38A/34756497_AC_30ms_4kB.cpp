#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , a, b , ans = 0;
    cin >> n;
    int array[n];
    for(int i=1;i<n;i++){
        cin >> array[i];
    }
    cin >> a >> b;
    for(int i=a;i<b;i++){
        ans += array[i];
    }
    cout << ans << endl;
}