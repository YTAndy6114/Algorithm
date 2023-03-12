#include <iostream>
//#define LOCAL
using namespace std;

int main() {

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    const int maxN = 7489;
    int t[5] = {1,5,10,25,50};
    int w[maxN+1] = {1};

    for(int i=0;i<5;i++){
        for(int j=0;j<=maxN;j++){
            if(j + t[i] > maxN) break;
            w[j + t[i]] += w[j];
        }
    }

    int n;
    while(cin>>n){
        cout << w[n] << endl;
    }
}