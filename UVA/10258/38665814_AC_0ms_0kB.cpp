#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
struct record
{
   int student,topic,time;
};
bool cmp(record a,record b){
   if(a.topic != b.topic) return a.topic > b.topic;
   if(a.time != b.time)   return a.time < b.time;
   return a.student < b.student;
}
int main(){
   int t;cin>>t;cin.ignore();cin.ignore();
   while(t--){
      int student,topic,time;char c;
      string s;bool b[101][10] = {false};int topicsum[101]={0},timesum[101]={0},wrongtime[101][10]={0};bool use[101] = {false};
      vector<record> v;
      while(getline(cin,s) && s.size()){
         stringstream ss(s);
         ss>>student>>topic>>time>>c;
         if(!b[student][topic]){
            if(c == 'C'){
               topicsum[student] ++;
               timesum[student]  += time + wrongtime[student][topic];
               b[student][topic] = 1;
            }
            if(c == 'I'){
               wrongtime[student][topic]  += 20;
            }
            use[student] = 1;
         }
      }
      for(int i=1;i<=100;i++){
         if(use[i]) v.push_back({i,topicsum[i],timesum[i]});
      }
      sort(v.begin(),v.end(),cmp);
      for(auto c : v){
         cout << c.student << " " << c.topic << " " << c.time << endl;
      }
      if(t) cout << endl;
   }
}