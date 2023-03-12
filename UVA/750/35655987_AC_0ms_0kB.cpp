#include<bits/stdc++.h>
#define mem(a) memset(a,0,sizeof(a));
int ans[8];
bool y[8];
bool slash[15];
bool backslash[15];
int ax,ay,c;
using namespace std;
void backtrack(int x){
    if(x==8){
        if(ans[ay] == ax){
            if(c<10)cout << " " <<c++ << "      ";
            else cout << c++ << "      ";
            for(int i=0;i<8;i++){
                if(i==7) cout << ans[i]+1 << endl;
                else cout << ans[i]+1 << " ";
            }
        }
    }
    for(int i=0;i<8;i++){
        int d1 = (x+i)%15 , d2 = (x-i+15)%15;
        if(!y[i] && !slash[d1] && !backslash[d2]){
            y[i] = slash[d1] = backslash[d2] = true;
            ans[x] = i;
            backtrack(x+1);
            y[i] = slash[d1] = backslash[d2] = false;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        c=1;
        cin>>ax>>ay;
        ax--;ay--;
        mem(y);
        mem(slash);
        mem(backslash);
        mem(ans);
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);
        if(t) cout << endl;
    }
}
/*
SOLN       COLUMN
 #      1 2 3 4 5 6 7 8

 1      3 1 7 5 8 2 4 6
 2      4 1 5 8 2 7 3 6
 3      4 1 5 8 6 3 7 2
 4      5 1 4 6 8 2 7 3
 5      5 1 8 4 2 7 3 6
 6      5 1 8 6 3 7 2 4
 7      6 1 5 2 8 3 7 4
 8      7 1 3 8 6 4 2 5

SOLN       COLUMN
 #      1 2 3 4 5 6 7 8

 1      1 6 8 3 7 4 2 5
 2      2 6 8 3 1 4 7 5
 3      4 2 7 3 6 8 1 5
 4      4 2 7 3 6 8 5 1
 5      4 6 8 3 1 7 5 2
 6      4 7 5 3 1 6 8 2
 7      4 8 1 3 6 2 7 5
 8      4 8 5 3 1 7 2 6
 9      5 7 1 3 8 6 4 2
10      7 2 6 3 1 4 8 5
11      8 2 5 3 1 7 4 6
12      8 4 1 3 6 2 7 5

*/