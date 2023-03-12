#include<bits/stdc++.h>
#define mem(a) memset(a,0,sizeof(a));
using namespace std;
struct Node
{
    int num; // 第幾個
    int value;
};
bool cmp(Node a,Node b){
    return a.value < b.value;
}
bool cmp1(Node a,Node b){
    return a.value > b.value;
}
vector<int> ans[70];
vector<Node> person; // 小~大
vector<Node> table;  // 大~小

int main(){
    int M=0,N=0;
    while(cin>>M>>N && M){ 
        // clear vector
        for(int i=0;i<70;i++) ans[i].clear();
        person.clear();
        table.clear();

        bool b = true;
        int temp=0,del=0;
        for(int i=0;i<M;i++){
            cin >> temp;
            if(temp>N) b = false;
            else if(temp==N){
                del++;
                for(int j=1;j<=N;j++) ans[i].push_back(j);
            }
            else person.push_back(Node{i,temp});
        }

        
        for(int i=0;i<N;i++){
            cin >> temp;
            if(temp<del) b = false;
            else if(temp-del) table.push_back(Node{i,temp-del});
        }

        sort(person.begin(),person.end(),cmp);
        sort(table.begin(),table.end(),cmp1);

        // cout << "person:" <<endl;
        // for(int i=0;i<person.size();i++){
        //     cout << "Num:" << person[i].num << ",";
        //     cout << "value:" << person[i].value << "\n";
        // }
        // cout << "table:\n";
        // for(int i=0;i<table.size();i++){
        //     cout << "Num:" << table[i].num << ",";
        //     cout << "value:" << table[i].value << "\n";
        // }
        if(b)
            for(int i=0;i<person.size();i++){
                int c=0;
                temp = person[i].value;
                sort(table.begin(),table.end(),cmp1);
                // cout << "i=" << i << endl;
                for(int j=0;j<table.size();j++){
                    if(table[j].value){
                        // cout << "table[j].value:" << table[j].value << endl;
                        // cout << "table[j].num" << table[j].num << endl;

                        ans[person[i].num].push_back(table[j].num+1);
                        table[j].value = table[j].value-1;
                        c++;
                        // cout << "c:" << c << endl;
                        
                    }
                    // cout << "person:" <<endl;
                    // for(int k=0;k<person.size();k++){
                    //     cout << "Num:" << person[k].num << ",";
                    //     cout << "value:" << person[k].value << "\n";
                    // }
                    // cout << "table:\n";
                    // for(int k=0;k<table.size();k++){
                    //     cout << "Num:" << table[k].num << ",";
                    //     cout << "value:" << table[k].value << "\n";
                    // }
                    if(c==temp) break;
                }
                if(c<temp) {
                    b=false;
                    break;
                }
            }
        
        if(b){
            cout << "1\n";
            for(int i=0;i<M;i++){
                sort(ans[i].begin(),ans[i].end());
                for(int j=0;j<ans[i].size();j++){
                    if(j<ans[i].size()-1) cout << ans[i][j] << " ";
                    else cout << ans[i][j] << endl;
                }
            }
        }
        else
            cout << "0\n";
    


    }
}
