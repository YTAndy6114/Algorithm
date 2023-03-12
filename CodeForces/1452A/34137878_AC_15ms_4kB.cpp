#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  while(n--){
    int a,b;
    cin >> a >> b;
    if(abs(a-b) <= 1) cout << a+b << "\n";
    else if(a==0 & b!=0 || a!=0 & b==0)
      cout << 2*max(a,b)-1 << "\n";
    else cout << a+b+abs(a-b)-1 << "\n";
  }
}