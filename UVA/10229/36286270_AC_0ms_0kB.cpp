#include <iostream>
#include <cstring>
using namespace std;
int mod,n,m;
struct mat{
    long long data[2][2];
    mat(){
        memset(data,0,sizeof(data));
    }
    mat operator * (mat &b){
        mat r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                for(int k=0;k<2;k++)
                    r.data[i][j] = (r.data[i][j] + data[i][k] * b.data[k][j]) % mod;
        return r;
    }
};

void solve(){
    mod = 1<<m;
    mat ret;
    mat f;
    ret.data[0][0] = 0;
    ret.data[1][0] = 1;
    f.data[0][0] = 0;
    f.data[0][1] = 1;
    f.data[1][0] = 1;
    f.data[1][1] = 1;
    while(n){
        if(n&1)
            ret = f * ret;
        f = f * f;
        n>>=1;
    }
    cout << ret.data[0][0] << endl;
}
int main(){
    while(cin >> n >>m){
        solve();
    }
}