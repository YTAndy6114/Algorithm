#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int a[n]={0},b[n]={0},c[n]={0},level=2;
        vector<int> v[n+1];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        c[0] = 1;
        for(int i=1,j=1;j<n;j++){
            if(a[i]==b[j]){
                c[j]=level;
                i++;
                if(i == n) break;
            }
            if(j == (n-1)){
                level++;
                j=1;
            }
        }
        int temp[level+1]={0},H=0;
        for(int i=0,t=1;t<=level;i++){
            if(c[i] == t){
                temp[t] = b[i];
                if(t>1 & !H) v[temp[t-1]].push_back(b[i]);
                t++;
            }
            else if(c[i] < t && !H){
                H =i;
            }
        }

        for(int i=H;i<n;i++){
            v[temp[c[i]-1]].push_back(b[i]);
            temp[c[i]] = b[i];
        }
        for(int i=1;i<=n;i++){
            cout << i << ": ";
            for(int j=0;j<v[i].size();j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}
/*
25
5 1 7 10 4 12 6 8 3 2 9 20 21 22 18 13 11 23 25 19 27 14 16 15 17
5 1 4 3 12 7 6 2 13 14 15 17 9 11 20 23 21 25 16 22 19 27 10 8 18
1 2 3 4  3 2 3 4  5  6  7  7 4  5  4  5  4  5  6  4  5  5  2 3 4

8
a    4 3 5 1 2 8 7 6
b    4 3 1 7 2 6 5 8
c    1 2 3 4 3 4 2 3
temp[4,3,2,7]


1 2 3 4  3 2 3 4  5  6  7  7 4  5  4  5  4  5  6  4  5  5  2 3 4 
1: 4 12
2: 13
3:
4: 3
5: 1 7 10
6: 2 9 20 21 22
7: 6
8: 18
9: 11
10: 8
11:
12:
13: 14
14: 15 17
15:
16:
17:
18:
19:
20: 23
21: 25
22: 19 27
23:
24:
25: 16
*/