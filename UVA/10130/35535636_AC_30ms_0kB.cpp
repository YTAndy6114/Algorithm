#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
int P[1000],W[1000];
int man[100];
int record[31];
int sum=0;
using namespace std;
void solve(int n,int w){
    memset(record,0,sizeof(record));
    for(int i=0;i<n;i++){
        for(int j=w;j>=W[i];j--){
            record[j] = max(record[j] , record[j-W[i]] + P[i]);
        }
    }
    sum = sum+record[w];
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,G;
        sum=0;
        cin >> N;
        loop(N) cin >> P[i] >> W[i];
        cin >> G;
        loop(G) cin >> man[i];
        for(int i=0;i<G;i++)
            solve(N,man[i]);

        cout << sum << endl;
    }
}
/*
0
435
83
646

*/