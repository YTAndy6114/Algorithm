#include <iostream>
#include <vector>
#include <algorithm>
//#define LOCAL
typedef long long LL;
using namespace std;
int main(){
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    int n;cin>>n;
    int M,C,Y;string s;
    while(cin>>M>>Y>>C>>s){
      bool b = true;
      for(int i=0;i<s.size();i++){
         switch(s[i]){
            case 'M':M--;
            break;
            case 'C':C--;
            break;
            case 'Y':Y--;
            break;
            case 'R':M--;Y--;
            break;
            case 'V':M--;C--;
            break;
            case 'B':M--;Y--;C--;
            break;
            case 'G':Y--;C--;
            break;
         }
         if(M<0 || Y<0 || C<0) {b=false;break;}
      }
      if(b) cout << "YES " << M << " " << Y << " " << C << endl;
      else cout << "NO" << endl;
    }
    
}