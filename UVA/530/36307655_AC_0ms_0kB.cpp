#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , k;
    vector<int> v;
    while(cin >> n >> k && n){
        v.clear();
        int a = k , b = n-k;
        if(max(a,b) == b){
            int temp = a;
            a = b;
            b = temp;
        }

        int temp = 1, temp1 = 1;
        for(int i=n;i>a;i--) v.push_back(i);
        for(int i=2;i<=b;i++){
            int tmpi = i;
            for(int j=0;j<v.size();j++){
                if(__gcd(tmpi,v[j]) != 1){
                    int tmp = v[j];
                    v[j] /= __gcd(tmpi,v[j]);
                    tmpi /= __gcd(tmpi,tmp);
                }
            }
            temp*=tmpi;
        }

        for(int i=0;i<v.size();i++)
            temp1 *= v[i];
        cout << temp1/temp << endl;

    }
}