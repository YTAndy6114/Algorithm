#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int n;
int main(){
    string s;
    cin >> s;
    vector<int> v;
    long long int n[s.size()];
    memset(n,0,sizeof(n));
    for(int i=0,count=0;i<s.size();i++){
        if(s[i] == 'v'){
            count++;
            if(i) {
                if(count > 1)
                    n[i] = n[i-1] + 1;
                else
                    n[i] = n[i-1];
            }
        }
        else {
            v.push_back(i);
            count=0;
            if(i)n[i] = n[i-1];
        }
    }
    unsigned long long int ans = 0;
    for(int i=0;i<v.size();i++){
        ans += n[v[i]] * (n[s.size()-1] - n[v[i]]);
    }
    cout << ans << endl;
}