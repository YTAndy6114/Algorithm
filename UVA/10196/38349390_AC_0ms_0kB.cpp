#include <bits/stdc++.h>
#define local
using namespace std;
string s[8];
int solve(){
   for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
         switch(s[i][j]){
            case 'p':
               if(i+1<8 && j-1>=0 && s[i+1][j-1] == 'K') return 2;
               if(i+1<8 && j+1<8 && s[i+1][j+1] == 'K') return 2;
               break;
            case 'P':
               if(i-1>=0 && j-1>=0 && s[i-1][j-1] == 'k') return 1;
               if(i-1>=0 && j+1<8 && s[i-1][j+1] == 'k') return 1;
               break;
            case 'r':
               for(int x=j-1;x>=0;x--){if(s[i][x] == 'K') return 2;else if(s[i][x] != '.') break;}
               for(int x=j+1;x<8;x++){if(s[i][x] == 'K') return 2;else if(s[i][x] != '.') break;}
               for(int x=i-1;x>=0;x--){if(s[x][j] == 'K') return 2;else if(s[x][j] != '.') break;}
               for(int x=i+1;x<8;x++){if(s[x][j] == 'K') return 2;else if(s[x][j] != '.') break;}
               break;
            case 'R':
               for(int x=j-1;x>=0;x--){if(s[i][x] == 'k') return 1;else if(s[i][x] != '.') break;}
               for(int x=j+1;x<8;x++){if(s[i][x] == 'k') return 1;else if(s[i][x] != '.') break;}
               for(int x=i-1;x>=0;x--){if(s[x][j] == 'k') return 1;else if(s[x][j] != '.') break;}
               for(int x=i+1;x<8;x++){if(s[x][j] == 'k') return 1;else if(s[x][j] != '.') break;}
               break;
            case 'n':
               if(i-2>=0 && j-1>=0 && s[i-2][j-1] == 'K') return 2;
               if(i-1>=0 && j-2>=0 && s[i-1][j-2] == 'K') return 2;
               if(i+1<8 && j-2>=0 && s[i+1][j-2] == 'K') return 2;
               if(i+2<8 && j-1>=0 && s[i+2][j-1] == 'K') return 2;
               if(i+2<8 && j+1<8 && s[i+2][j+1] == 'K') return 2;
               if(i+1<8 && j+2<8 && s[i+1][j+2] == 'K') return 2;
               if(i-1>=0 && j+2<8 && s[i-1][j+2] == 'K') return 2;
               if(i-2>=0 && j+1<8 && s[i-2][j+1] == 'K') return 2;
               break;
            case 'N':
               if(i-2>=0 && j-1>=0 && s[i-2][j-1] == 'k') return 1;
               if(i-1>=0 && j-2>=0 && s[i-1][j-2] == 'k') return 1;
               if(i+1<8 && j-2>=0 && s[i+1][j-2] == 'k') return 1;
               if(i+2<8 && j-1>=0 && s[i+2][j-1] == 'k') return 1;
               if(i+2<8 && j+1<8 && s[i+2][j+1] == 'k') return 1;
               if(i+1<8 && j+2<8 && s[i+1][j+2] == 'k') return 1;
               if(i-1>=0 && j+2<8 && s[i-1][j+2] == 'k') return 1;
               if(i-2>=0 && j+1<8 && s[i-2][j+1] == 'k') return 1;
               break;
            case 'b':{
               int it = i , jt = j;
               while(it-1>=0 && jt-1>=0 && (s[it-1][jt-1] == '.' || s[it-1][jt-1] == 'K')) {if(s[it-1][jt-1] == 'K') return 2;it--;jt--;}
               it = i , jt = j;
               while(it-1>=0 && jt+1<8 && (s[it-1][jt+1] == '.' || s[it-1][jt+1] == 'K'))  {if(s[it-1][jt+1] == 'K') return 2;it--;jt++;}
               it = i , jt = j;
               while(it+1<8 && jt-1>=0 && (s[it+1][jt-1] == '.' || s[it+1][jt-1] == 'K'))  {if(s[it+1][jt-1] == 'K') return 2;it++;jt--;}
               it = i , jt = j;
               while(it+1<8 && jt+1<8 && (s[it+1][jt+1] == '.' || s[it+1][jt+1] == 'K'))   {if(s[it+1][jt+1] == 'K') return 2;it++;jt++;}
               break;
            }
            case 'B':{
               int it = i , jt = j;
               while(it-1>=0 && jt-1>=0 && (s[it-1][jt-1] == '.' || s[it-1][jt-1] == 'k')) {if(s[it-1][jt-1] == 'k') return 1;it--;jt--;}
               it = i , jt = j;
               while(it-1>=0 && jt+1<8 && (s[it-1][jt+1] == '.' || s[it-1][jt+1] == 'k'))  {if(s[it-1][jt+1] == 'k') return 1;it--;jt++;}
               it = i , jt = j;
               while(it+1<8 && jt-1>=0 && (s[it+1][jt-1] == '.' || s[it+1][jt-1] == 'k'))  {if(s[it+1][jt-1] == 'k') return 1;it++;jt--;}
               it = i , jt = j;
               while(it+1<8 && jt+1<8 && (s[it+1][jt+1] == '.' || s[it+1][jt+1] == 'k'))   {if(s[it+1][jt+1] == 'k') return 1;it++;jt++;}
               break;
            }
            case 'q':{
               int it = i , jt = j;
               while(it-1>=0 && jt-1>=0 && (s[it-1][jt-1] == '.' || s[it-1][jt-1] == 'K')) {if(s[it-1][jt-1] == 'K') return 2;it--;jt--;}
               it = i , jt = j;
               while(it-1>=0 && jt+1<8 && (s[it-1][jt+1] == '.' || s[it-1][jt+1] == 'K'))  {if(s[it-1][jt+1] == 'K') return 2;it--;jt++;}
               it = i , jt = j;
               while(it+1<8 && jt-1>=0 && (s[it+1][jt-1] == '.' || s[it+1][jt-1] == 'K'))  {if(s[it+1][jt-1] == 'K') return 2;it++;jt--;}
               it = i , jt = j;
               while(it+1<8 && jt+1<8 && (s[it+1][jt+1] == '.' || s[it+1][jt+1] == 'K'))   {if(s[it+1][jt+1] == 'K') return 2;it++;jt++;}
               for(int x=j-1;x>=0;x--){if(s[i][x] == 'K') return 2;else if(s[i][x] != '.') break;}
               for(int x=j+1;x<8;x++){if(s[i][x] == 'K') return 2;else if(s[i][x] != '.') break;}
               for(int x=i-1;x>=0;x--){if(s[x][j] == 'K') return 2;else if(s[x][j] != '.') break;}
               for(int x=i+1;x<8;x++){if(s[x][j] == 'K') return 2;else if(s[x][j] != '.') break;}
               break;
            }
            case 'Q':{
               int it = i , jt = j;
               while(it-1>=0 && jt-1>=0 && (s[it-1][jt-1] == '.' || s[it-1][jt-1] == 'k')) {if(s[it-1][jt-1] == 'k') return 1;it--;jt--;}
               it = i , jt = j;
               while(it-1>=0 && jt+1<8 && (s[it-1][jt+1] == '.' || s[it-1][jt+1] == 'k'))  {if(s[it-1][jt+1] == 'k') return 1;it--;jt++;}
               it = i , jt = j;
               while(it+1<8 && jt-1>=0 && (s[it+1][jt-1] == '.' || s[it+1][jt-1] == 'k'))  {if(s[it+1][jt-1] == 'k') return 1;it++;jt--;}
               it = i , jt = j;
               while(it+1<8 && jt+1<8 && (s[it+1][jt+1] == '.' || s[it+1][jt+1] == 'k'))   {if(s[it+1][jt+1] == 'k') return 1;it++;jt++;}
               for(int x=j-1;x>=0;x--){if(s[i][x] == 'k') return 1;else if(s[i][x] != '.') break;}
               for(int x=j+1;x<8;x++){if(s[i][x] == 'k') return 1;else if(s[i][x] != '.') break;}
               for(int x=i-1;x>=0;x--){if(s[x][j] == 'k') return 1;else if(s[x][j] != '.') break;}
               for(int x=i+1;x<8;x++){if(s[x][j] == 'k') return 1;else if(s[x][j] != '.') break;}
               break;
            }
         }
      }
   }
   return 3;
}
int main(){
   int game = 1;
   while(true){
      bool exit = true;
      for(int i=0;i<8;i++){
         cin>>s[i];
         if(s[i] != "........") exit = false;
      }
      cin.ignore();
      if(exit) break;
      int answer = solve();
      cout << "Game #" << game++ << ":";
      if(answer == 1) cout << " black king is in check.\n";
      else if(answer == 2) cout << " white king is in check.\n";
      else cout << " no king is in check.\n";
   }
}