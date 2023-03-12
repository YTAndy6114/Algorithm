#include <bits/stdc++.h>
using namespace std;
map<string,int> ma;
int main(){
    int t=0;

    for(char i='a';i<='z';i++) {
        string temp = "";
        temp.push_back(i);
        ma[temp] = ++t;
    }
    
    for(char i='a';i<='y';i++)
        for(char j=i+1;j<='z';j++){
            string temp = "";
            temp.push_back(i);
            temp.push_back(j);
            ma[temp] = ++t;
        }
   
    
    for(char i='a';i<='x';i++)
        for(char j=i+1;j<='y';j++)
            for(char k=j+1;k<='z';k++){
                string temp = "";
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(k);
                ma[temp] = ++t;
            }
    
    
    for(char i='a';i<='w';i++)
        for(char j=i+1;j<='x';j++)
            for(char k=j+1;k<='y';k++)
                for(char l=k+1;l<='z';l++){
                    string temp = "";
                    temp.push_back(i);
                    temp.push_back(j);
                    temp.push_back(k);
                    temp.push_back(l);
                    ma[temp] = ++t;
                }
    

    for(char i='a';i<='v';i++)
        for(char j=i+1;j<='w';j++)
            for(char k=j+1;k<='x';k++)
                for(char l=k+1;l<='y';l++)
                    for(char m=l+1;m<='z';m++){
                        string temp = "";
                        temp.push_back(i);
                        temp.push_back(j);
                        temp.push_back(k);
                        temp.push_back(l);
                        temp.push_back(m);
                        ma[temp] = ++t;
                    }

    string ans;
    while(cin >> ans){
        map<string,int>::iterator iter;
        iter = ma.find(ans);
        if(iter != ma.end())
            cout << iter->second << endl;
        else
            cout << 0 << endl;
    }
}
/*
z
a
cat
vwxyz
*/