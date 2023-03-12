#include <bits/stdc++.h>
using namespace std;
string dictionary[16][1000];
int dictionarynumber[16]={0};
char decode[26];
bool used[26];

string encry[80];
int ennum=0;
bool backtrack(int completed){
   if(completed >= ennum) 
      return true;

   char temp_decode[26];
   bool temp_used[26];
   for(int i=0;i<26;i++){
      temp_used[i] = used[i];
      temp_decode[i] = decode[i];
   }

   int group = encry[completed].size()-1,num = dictionarynumber[group];
   for(int i=0;i<num;i++){
      bool match = true;
      for(int j=0;j<=group && match;j++){
         char x = encry[completed][j];
         char y = dictionary[group][i][j];
         if(decode[x-'a'] == '*'){
             if(!used[y - 'a']) {
                 decode[x - 'a'] = y;
                 used[y - 'a'] = true;
             }
             else match = false; 
         }
         else{
            if(decode[x-'a'] != y) match=false;
         }
      }
      if(match)
         if(backtrack(completed+1))
            return true;
      
      for(int k=0;k<26;k++){
         used[k] = temp_used[k];
         decode[k] = temp_decode[k];
      }
   }
   return false;
}
int main(){ 
   int t;cin>>t;
   string s;
   for(int i=0;i<t;i++){
      cin>>s;
      dictionary[s.size()-1][dictionarynumber[s.size()-1]++] = s;
   }
   cin.ignore();
   while(getline(cin,s)){
      stringstream ss(s);
      for(int i=0;i<26;i++){
         decode[i] = '*';
         used[i]   = false;
      }
      ennum=0;
      while(ss >> encry[ennum]) ennum++;

      backtrack(0);

      for(int i=0;i<s.size();i++){
         if(s[i] == ' ') cout << " ";
         else            cout << decode[s[i]-'a'];
      }
      cout << endl;
   }
}