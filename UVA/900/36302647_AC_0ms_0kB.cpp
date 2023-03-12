#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n && n){
         long long int ans = 0;
        vector<int> v;
        for(int ty=0;ty<=(n/2);ty++){
            int tx = n-2*ty;
            int x=tx,y=ty;
            v.clear();
            if(max(x,y) == y){
                int tempnode = x;
                x = y;
                y = tempnode;
            }
             long long int temp = 1;
             long long int temp1 = 1;
            for(int i=x+y;i>x;i--)
                v.push_back(i);
            for(int i=y;i>=2;i--){
                int tmp = i;
                for(int j=0;j<v.size();j++){
                    if(__gcd(tmp,v[j]) != 1){
                        int te =v[j];
                        v[j] = v[j] / __gcd(tmp,v[j]);
                        tmp = tmp / __gcd(tmp,te);
                    }
                }
                temp*= tmp;
            }

            for(int i=0;i<v.size();i++){
                temp1 *= v[i];
                // if(temp1 < 0) cout << y << endl;
            }
            ans += (temp1/temp);
            // printf("tx=%d,ty=%d,temp=%lld,temp1=%lld,ans=%lld\n",tx,ty,temp,temp1,ans);


        }
        cout << ans << endl;
    }
}