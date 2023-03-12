#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    string s;
    while(cin >> s && s[0] != '.'){
        int table[s.length()];
        memset(table,0,sizeof(table));
        table[0] = -1;
        int i=0,j=-1;
        while(i < s.length()){
            if(j==-1 || s[i] == s[j])
                table[++i] = ++j;
            else
                j = table[j];
        }
        if(s.length() % (s.length() - table[s.length()]) == 0)
            cout << s.length() / (s.length() - table[s.length()]) << "\n";
        else
            cout << "1\n";
    }
}