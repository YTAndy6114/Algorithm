#include <bits/stdc++.h>
#define local
using namespace std;
int main(){
   int reg[10],mem[1000];
   string s;
   int t;cin>>t;cin.ignore();cin.ignore();
   while(t--){
      memset(reg,0,sizeof(reg));
      memset(mem,0,sizeof(mem));
      int now=0,ans=0;
      while(getline(cin,s) && s.size())
         mem[now++] = stoi(s);
      now=0;
      bool half = true;
      while(half){
         int d = mem[now]%100/10;
         int n = mem[now]%10;
         ans++;
         now++;
         switch(mem[now-1]/100){
            case 1:
               half = false;
               break;
            case 2:
               reg[d] = n;
               break;
            case 3:
               reg[d] += n;
               reg[d] %= 1000;
               break;
            case 4:
               reg[d] *= n;
               reg[d] %= 1000;
               break;
            case 5:
               reg[d] = reg[n];
               break;
            case 6:
               reg[d] += reg[n];
               reg[d] %= 1000;
               break;
            case 7:
               reg[d] *= reg[n];
               reg[d] %= 1000;
               break;
            case 8:
               reg[d] = mem[reg[n]];
               break;
            case 9:
               mem[reg[n]] = reg[d];
               break;
            case 0:
               if(reg[n])
                  now = reg[d];
               break;
         } 
      }
      cout << ans << endl;
      if(t) cout << endl;
   }
}