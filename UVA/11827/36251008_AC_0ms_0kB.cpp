#include <bits/stdc++.h>
using namespace std;
string s,tmp;
int Max;
vector<int> v;
int GCD(int a,int b){
    while(a%b){
        int tmp = a;
        a = b;
        b = tmp % a;
    }
    return b;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        Max = 1;
        getline(cin,s);
        v.clear();
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                tmp += s[i];
                if(i==s.length()-1) {v.push_back(stoi(tmp)); tmp = ""; }
            }
            else if(s[i] == ' '){
                v.push_back(stoi(tmp));
                tmp = "";
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                Max = max(Max , GCD(v[i],v[j]));
            }
        }
        cout << Max << endl;
    }
}