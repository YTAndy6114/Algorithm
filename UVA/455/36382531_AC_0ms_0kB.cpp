#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


int main(){
    int n;
    string s;
    cin >> n ;
    while(n--){
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
        if(s.length() % (s.length()-table[s.length()]) == 0 ) 
            cout << s.length() - table[s.length()] << "\n";
        else
            cout << s.length() << "\n";
        if(n)
            cout << endl;
    }
}