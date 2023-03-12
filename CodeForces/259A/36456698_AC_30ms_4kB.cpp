#include <iostream>
using namespace std;
int n,T;
long long int a , b;
int main(){
    string s;
    bool b = true;
    for(int i=0;i<8;i++){
        cin >> s;
        if(b){
            for(int j=0;j<7;j++){
                if(s[j] == s[j+1]){
                    b = false;
                    break;
                }
            }
            if(s[0] == s[7]) b = false;
        }
    }
    if(b) cout << "YES\n";
    else cout << "NO\n";
}
/*
WBWBWBWB
BWBWBWBW
BWBWBWBW
BWBWBWBW
WBWBWBWB
WBWBWBWB
BWBWBWBW
WBWBWBWB
*/