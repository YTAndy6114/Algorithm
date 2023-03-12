#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , compare = 0;
    cin >> n;
    if(n == compare) cout << "YES\n";
    else{ 
        for(int i=1;i<500;i++){
            compare+=i;
            if(compare > n){
                cout << "NO\n"; 
                break;
            }
            if(compare == n){
                cout << "YES\n";
                break;
            }
        }
    }
}