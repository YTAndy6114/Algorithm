#include <bits/stdc++.h>
using namespace std;

int main(){
    bool flag = false;
    char s[1001];
    while(gets(s)){
        if(flag) printf("\n");
        flag = true;
        int n[128] = {0};
        memset(n,0,sizeof(n));
        for(int i=0;i<strlen(s);i++)  n[s[i]]++;
        for(int i=0;i<=strlen(s);i++){
            for(int j=127;j>=32;j--){
                if(i==n[j] && i){
                    cout << j << " " << i << endl;
                }
            }
        }
    }
}
/*
63 1

63 2

63 3

126 1
63 3

126 2
63 3

*/