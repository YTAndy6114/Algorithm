#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n[t] , maxValue = 0;
    for(int i=0;i<t;i++)  cin >> n[i];

    for(int i=0;i<t;i++){
        int temp = n[i];
        maxValue = n[i] > maxValue ? n[i] : maxValue;
        for(int j=i+1;j<t;j++){
            temp ^= n[j];
            maxValue = temp > maxValue ? temp : maxValue;
        }
    }
    
    cout << maxValue << endl;
}