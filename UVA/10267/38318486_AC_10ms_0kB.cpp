#include <bits/stdc++.h>
#define local
using namespace std;
char mp[251][251];
int M=0,N=0;
void dfs(int x,int y,char tar,char C){

   if (y < 1 || y > N || x < 1 || x > M || mp[y][x] != tar) return;
   mp[y][x] = C;
   dfs(x + 1, y, tar, C);
   dfs(x - 1, y, tar, C);
   dfs(x, y + 1, tar, C);
   dfs(x, y - 1, tar, C);
}
int main(){
   int x,y,x1,y1,x2,y2;
   char c,C;
   string Name;
   memset(mp,'O',sizeof(mp));
   while(cin>>c && c!='X'){
      switch(c){
         case 'I':
            cin>>M>>N;
            memset(mp,'O',sizeof(mp));
            break;
         case 'C':
            memset(mp,'O',sizeof(mp));
            break;
         case 'L':
            cin >> x >> y >> C;
            mp[y][x]=C;
            break;
         case 'V':
            cin>>x>>y1>>y2>>C;
            if(y1>y2) swap(y1,y2);
            for(int i=y1;i<=y2;i++)
               mp[i][x] = C;
            break;
         case 'H':
            cin>>x1>>x2>>y>>C;
            if(x1>x2) swap(x1,x2);
            for(int i=x1;i<=x2;i++)
               mp[y][i] = C;
            break;
         case 'K':
            cin>>x1>>y1>>x2>>y2>>C;
            if(x1>x2) swap(x1,x2);
            if(y1>y2) swap(y1,y2);
            for(int i=y1;i<=y2;i++){
               for(int j=x1;j<=x2;j++){
                  mp[i][j] = C;
               }
            }
            break;
         case 'F':
            cin>>x>>y>>C;
            if(mp[y][x] != C) dfs(x,y,mp[y][x],C);
            break;
         case 'S':
            cin>>Name;
            cout << Name << endl;
            for(int i=1;i<=N;i++){
               for(int j=1;j<=M;j++){
                  cout << mp[i][j];
               }
               cout << endl;
            }
         default:
            getline(cin,Name);
            break;
      }

   }
}