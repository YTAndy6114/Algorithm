#include <bits/stdc++.h>
#define local;
using namespace std;
int main() {
  int n;
  set<int> st;
  while (cin >> n && n) {
    st.clear();
    int temp = 0,num;
    for(int i=0;i<n;i++){
      cin >> num;
      if(i) st.insert(abs(num-temp));
      temp = num;
    }
    bool b = true;
    temp = 1;
    for(auto i : st){
      if(i != temp++){
        b=false;
        break;
      }
    }
    if(b && temp == n) cout <<  "Jolly\n";
    else cout << "Not jolly\n";
  }

}
/*
2
14
3
3
4
8
100
4
12
15
25
40
*/