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
    vector<LL> v;LL sum=0,i=1,n;
    while(sum<=100000000){sum+=i;i++;v.push_back(sum);}
    while(cin>>n && n){
      auto index = upper_bound(v.begin(),v.end(),n);
      cout << v[index-v.begin()] - n << " " << index-v.begin()+1 << endl;
    }
    
}