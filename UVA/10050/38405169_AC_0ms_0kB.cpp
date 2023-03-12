#include <bits/stdc++.h>
#define local;
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int day,work;
    cin>>day>>work;
    int temp;
    set<int> ans;
    for(int i=0;i<work;i++) {
      cin>>temp;     
      int tmp=temp;
      while(temp<=day){
        if(temp%7 != 0 && temp%7 != 6) {ans.insert(temp);}
        temp+=tmp;
        
      }
    }
    cout << ans.size() << endl;
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