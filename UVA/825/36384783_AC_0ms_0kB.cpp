#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <sstream>
using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int dp[a+1][b+1];
        memset(dp,0,sizeof(dp));
        vector<int> v;
        cin.ignore();
        int xstart = 0 , ystart = 0;
        for(int i=0;i<a;i++){
            v.clear();
            string s;
            getline(cin,s);
            stringstream ss(s);
            int num;
            while(ss >> num)
                v.push_back(num);
            if(v.size()==1) continue;
            int x = v[0];
            for(int i=1;i<v.size();i++){
                dp[x][v[i]] = -1;
                if(x == 1 && !xstart) xstart = x;
                if(v[i] == 1 && !ystart) ystart = v[i]; 
            }
        }
        if(!xstart) xstart = a+1;
        if(!ystart) ystart = b+1;
        // cout << "xstart:" << xstart << ",ystart:" << ystart << endl;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if( (i==1 && i < xstart) || (j==1 && j < ystart)) dp[i][j] = 1;
                else if(dp[i][j] != -1){
                    int aa=0,bb=0;
                    if(dp[i-1][j] != -1) aa = dp[i-1][j];
                    if(dp[i][j-1] != -1) bb = dp[i][j-1];
                    dp[i][j] = aa + bb;
                }
            }
        }

        // cout << "ans:\n";
        cout << dp[a][b] << endl;
        if(n) cout << endl;
    }
}