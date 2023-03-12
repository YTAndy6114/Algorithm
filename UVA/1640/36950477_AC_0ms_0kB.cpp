#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
//#define LOCAL
using namespace std;
typedef long long LL;
vector<int> i2v(int n){
    vector<int> temp;
    while(n!=0){
        temp.push_back(n%10);
        n/=10;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}
void solve(int n,vector<int>& result){
    vector<int> temp = i2v(n);
    int digit = temp.size();
    int power = pow(10,digit-1);
    // cout << digit << "," << power << endl;

    for(int i=0;i<digit;i++){

        for(int j=0;j<temp[i];j++) result[j] += power;
        for(int j=0;j<10;j++)     result[j] += power / 10 * (digit-i-1) * temp[i];
        if(i+1 < digit) result[temp[i]] += n%power;
        result[temp[i]] ++;
        result[0] -= power;
        power/=10;

    }
}
int main(){

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    
    int a,b;
    while(cin>>a>>b && a+b>0){
        if(a>b) swap(a,b);
        vector<int>result_a(10,0),result_b(10,0);
        solve(a-1,result_a);solve(b,result_b);
        for(int i=0;i<9;i++)
            cout << result_b[i]-result_a[i] << " ";
        
        cout << result_b[9] - result_a[9] << endl;
    }
}
/*
1 10
44 497
346 542
1199 1748
1496 1403
1004 503
1714 190
1317 854
1976 494
1001 1960
0 0
*/