#include <bits/stdc++.h>
using namespace std;
int mx[6]={1,-1,0,0,0,0},my[6]={0,0,1,-1,0,0},mz[6]={0,0,0,0,1,-1};

void clean(queue<int> &q){
    queue<int> e;
    swap(q,e);
}
int main(){
    int a,b,c;
    while(cin >> a >> b >> c && a){
        queue<int> q[3];
        int ans = 0 , temp=0;
        int n[30][30][30]={0} , record[30][30][30] = {0};
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                string s;
                while(cin >> s && s.size()!=c);
                for(int k=0;k<c;k++){
                    if(s.at(k) == 'S'){
                        n[i][j][k] = 1;
                        q[0].push(i);q[1].push(j);q[2].push(k);
                    }
                    else if(s.at(k) == '#') n[i][j][k] = -1;
                    else if(s.at(k) == 'E') n[i][j][k] = 2;
                }
            }
        }
        while(!q[0].empty()){
            int si = q[0].size();
            while(si--){
                int x=q[0].front(),y=q[1].front(),z=q[2].front();
                for(int i=0;i<6;i++){
                    int x_temp = x+mx[i],y_temp=y+my[i],z_temp=z+mz[i];
                    if(x_temp>=0 && x_temp <a && y_temp>=0 && y_temp<b && z_temp>=0 && z_temp<c && !record[x_temp][y_temp][z_temp] && n[x_temp][y_temp][z_temp] != -1){
                        if(n[x_temp][y_temp][z_temp] == 2){
                            ans = temp+1;
                            clean(q[0]);
                            break;
                        }
                        q[0].push(x_temp);q[1].push(y_temp);q[2].push(z_temp);
                        record[x_temp][y_temp][z_temp] = 1;
                    }
                }
                if(q[0].empty()) break;
                else {q[0].pop(); q[1].pop() ; q[2].pop();}
            }
            temp++;
        }
        if(ans) cout << "Escaped in "<< ans  << " minute(s)."<< endl;
        else cout << "Trapped!\n";
    }
}