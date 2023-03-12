#include <iostream>
// #define LOCAL
using namespace std;

int main() {

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    const int Max_Value = 7489;
    const int x[5]      = {1,5,10,25,50};
    const int x_size    = sizeof(x) / sizeof(int);
    int w[Max_Value+1]  = {1};

    for(int i=0;i<x_size;i++){
        for(int j=0;j<=Max_Value;j++){
            if(j + x[i] > Max_Value) break;
            w[j + x[i]] += w[j];
        }
    }

    int n;
    while(cin>>n)
        cout << w[n] << endl;
}