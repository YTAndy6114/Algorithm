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
    int n,i=1;cin>>n;
    while(n--){
      cout << "Case " << i++ << ": ";
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int x = (a+b)*(a+b+1)/2+a , y = (c+d)*(c+d+1)/2+c;
      cout << abs(x-y) << endl;
      
    }
    
}