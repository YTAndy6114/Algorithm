#include <iostream>
#include <map>
#include <sstream>
using namespace std;
const int Max = 10000;
map<string,int> NameToNumber;
int relation[Max][Max];
int ans[Max];
int people=0;
void build(string s){
   stringstream ss(s.substr(0,s.find(':')));
   int Group[Max]={0},cnt=0;
   while(true){
      string fr,sc;ss>>fr;if(ss.fail())break;ss>>sc;fr += " " + sc;if(fr[fr.size()-1] == ',') fr=fr.substr(0,fr.size()-1);
      if(NameToNumber.find(fr) == NameToNumber.end()){
         NameToNumber[fr] = people++;
         Group[cnt++] = people-1;
      }
      else{
         Group[cnt++] = NameToNumber[fr];
      }
   }
   for(int i=0;i<cnt;i++){
      for(int j=0;j<cnt;j++){
         if(Group[i] != Group[j])
            relation[Group[i]][Group[j]] = relation[Group[j]][Group[i]] = 1;
      }
   }
}
void bfs(){
   int queue[Max];
   int fr=0,ls=1;
   queue[fr]=NameToNumber["Erdos, P."];
   ans[queue[fr]]=0;
   int vis[Max] = {0};
   while(fr<ls){
      for(int i=0;i<people;i++){
         if(queue[fr] != i && relation[queue[fr]][i] && !vis[i]){
            ans[i] = ans[queue[fr]]+1;
            queue[ls++]=i;
            vis[i]=1;
         }
      }
      fr++;
   }
}
int main(){
   int t;cin>>t;
   for(int i=1;i<=t;i++){
      cout << "Scenario " << i << endl;
      int a,b;cin>>a>>b;cin.ignore();
      for(int j=0;j<a;j++){
         string s;getline(cin,s);
         build(s);
      }
      bfs();
      for(int i=0;i<b;i++){
         string s;getline(cin,s);
         if(NameToNumber.find(s) == NameToNumber.end()) 
            cout<< s <<" infinity\n";
         else if(ans[NameToNumber[s]] == 0)
            cout<< s <<" infinity\n";
         else
            cout << s << " " << ans[NameToNumber[s]] << endl;
      }
      NameToNumber.clear();
      for(int i=0;i<people;i++){
         for(int j=0;j<people;j++){
            relation[i][j] = 0; 
         }
         ans[i] = 0;
      }
      people=0;
   }
}