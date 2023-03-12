#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int word[52];
    while(getline(cin,s)){
        memset(word,0,sizeof(word));
        int Max = -1;
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <='Z') {
                word[s[i]-'A']++;
                Max = max(Max,word[s[i]-'A']);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') {
                word[s[i]-'a'+26]++;
                Max = max(Max,word[s[i]-'a'+26]);
            }
        }

        for(int i=0;i<52;i++){
            if(word[i] == Max){
                if(i<=25) cout << char('A'+i);
                else cout << char('a'+(i-26));
            }
        }
        cout << " " << Max << endl;
    }
}