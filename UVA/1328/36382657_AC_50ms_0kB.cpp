#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    int n;
    string s;
    int Case = 1;
    while(cin >> n && n){
        cout << "Test case #" << Case++ << "\n";
        cin.ignore();
        cin >> s;
        
        int table[s.length()+1];
        memset(table,0,sizeof(table));
        table[0] = -1;
        int i=0 , j=-1;
        while(i != s.length()){
            if(j==-1 || s[i] == s[j])
                table[++i] = ++j;
            else
                j = table[j];
        }
        
        for(int i=2;i<=n;i++){
            if(!table[i]) continue;
            if(i % (i-table[i]) == 0) cout << i << " " << i/(i-table[i]) << "\n";
        }
        cout << "\n";
    }
}