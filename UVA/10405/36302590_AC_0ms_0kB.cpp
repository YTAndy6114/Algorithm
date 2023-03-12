#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int x[1001][1001];
int main(){
    string s1,s2;
    while(getline(cin,s1)){
        getline(cin,s2);
        int s1l = s1.length() , s2l = s2.length();
        memset(x,0,sizeof(x));
        for(int i=1;i<=s1l;i++){
            for(int j=1;j<=s2l;j++){
                if(s1[i-1] == s2[j-1]) x[i][j] = x[i-1][j-1] + 1;
                else x[i][j] = max(x[i-1][j] , x[i][j-1]);
            }
        }
        cout << x[s1l][s2l] << endl;
    }
}