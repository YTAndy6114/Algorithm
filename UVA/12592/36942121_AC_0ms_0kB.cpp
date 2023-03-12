#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
// #define LOCAL
using namespace std;
typedef long long LL;
int main(){

#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    int n;cin>>n;
    cin.ignore(1,'\n');
    string s1,s2;
    map<string,string> m;
    while(n--){
        getline(cin,s1);getline(cin,s2);
        m.insert({s1,s2});
    }
    cin>>n;
    cin.ignore(1,'\n');
    while(getline(cin,s1)){
        cout << m[s1] << endl;
    }
}
