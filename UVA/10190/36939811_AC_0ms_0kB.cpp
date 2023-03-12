#include <iostream>
#include <algorithm>
#include <vector>
//#define LOCAL
using namespace std;
const int maxn=2e9;
typedef long long LL;
int main(){

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    LL a,b;
    bool ab = false;
    while(cin>>a>>b){
        LL i=b;
        vector<LL> ans;
        if(a<=1 && b<=1) cout << "Boring!\n";
        else{
            if(b>1)for(i=b;i<a;i*=b) ans.push_back(i);
            if(i!=a) cout << "Boring!\n";
            else{
                ans.push_back(a);ans.push_back(1);
                sort(ans.begin(),ans.end(),greater<LL>());
                for(int i=0;i<ans.size();i++){
                    if(i<ans.size()-1) cout << ans[i] << " ";
                    else cout << ans[i];
                }
                cout << endl;
            }
        }
    }
}
