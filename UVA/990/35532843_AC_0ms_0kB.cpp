#include<bits/stdc++.h>
using namespace std;
const int N=30,T=1000;
int record[T+1];
bool p[N][T+1];
struct diver
{
    int d,v;
}man[N];
void solve(int n,int t,int w){
    memset(record,0,sizeof(record));
    memset(p,false,sizeof(p));

    // record
    for(int i=0;i<n;i++){
        for(int j=t;j>=man[i].d;j--){
            if(record[j-man[i].d] + man[i].v > record[j]){
                record[j] = record[j-man[i].d] + man[i].v;
                p[i][j] = true;
            }
        }
    }
    cout << record[t] << endl;
    stack<diver> st;
    for(int i=n-1,j=t;i>=0;i--){
        if(p[i][j]){
            st.push(diver{man[i].d/3/w ,man[i].v});
            j-=man[i].d;
        }
    }
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top().d << " " << st.top().v << endl;
        st.pop();
    }
}
int main(){
    int t,w,n,c=0;
    while(cin >> t >> w >> n){
if(c++) cout << endl;
        for(int i=0;i<n;i++){
            cin >> man[i].d >> man[i].v;
            man[i].d *= (3*w);
        }
        solve(n,t,w);
    }
}

/*
210 4
3
10 5
10 1
7 2
*/
