#include <bits/stdc++.h>
using namespace std;

int main(){ 
   int t;cin>>t;bool b = false;
   while(t--){
      if(b)cout << endl;
      else b = !b;
      int times;cin>>times;
      int role[times][52];
      for(int i=0;i<times;i++) for(int j=0;j<52;j++) cin>>role[i][j];
      int k;string s;
      int ans[52];for(int i=0;i<52;i++) ans[i] = i+1;
      cin.ignore();
      while(getline(cin,s) && s.size()){
         k = stoi(s) - 1;
         int temp[52];
         for(int i=0;i<52;i++){
            temp[i] = ans[role[k][i]-1];
         }
         copy(temp,temp+52,ans);
      }
      for(int i=0;i<52;i++){
         int num   = ans[i]%13;
         int color = ans[i]/13;
         if(num == 0){
            cout << "Ace of ";
            if(color == 1) cout << "Clubs\n";
            else if(color == 2) cout << "Diamonds\n";
            else if(color == 3) cout << "Hearts\n";
            else cout << "Spades\n";
         }
         else{
            if(num == 10) cout << "Jack of ";
            else if(num == 11) cout << "Queen of ";
            else if(num == 12) cout << "King of ";
            else cout << num+1 << " of ";
            if(color == 0) cout << "Clubs\n";
            else if(color == 1) cout << "Diamonds\n";
            else if(color == 2) cout << "Hearts\n";
            else cout << "Spades\n";
         }
      }
   }
}