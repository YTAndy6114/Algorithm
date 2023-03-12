#include <bits/stdc++.h>

using namespace std;
int main() {
   int n;string s;
   while(cin>>n>>s && n){
      string ans[n*2+3][(n+2)*s.size()+s.size()-1];
      for(auto &c:ans)
         for(auto &d:c)d = " ";
      int now=0;
      for(int i=0;i<s.size();i++){
         if(i) now = now+n+3;
         switch(s[i]){
            case '0':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';
                  ans[j][now] = '|';
                  ans[j][now+n+1] = '|';
                  ans[n+1+j][now] = '|';
                  ans[n+1+j][now+n+1] = '|';
                  ans[n*2+2][now+j] = '-';
               }
            break;
            case '1':
               for(int j=1;j<=n;j++){
                  ans[j][now+n+1] = '|';
                  ans[n+1+j][now+n+1] = '|';
               }
            break;
            case '2':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';          
                  ans[j][now+n+1] = '|';     
                  ans[n+1][now+j] = '-';     
                  ans[n+1+j][now] = '|';     
                  ans[n*2+2][now+j] = '-';       
               }
            break;
            case '3':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                          
                  ans[j][now+n+1] = '|';     
                  ans[n+1][now+j] = '-';     
                      
                  ans[n+1+j][now+n+1] = '|'; 
                  ans[n*2+2][now+j] = '-';            
               }
            break;
            case '4':
               for(int j=1;j<=n;j++){
                        
                  ans[j][now] = '|';         
                  ans[j][now+n+1] = '|';     
                  ans[n+1][now+j] = '-';     
                      
                  ans[n+1+j][now+n+1] = '|'; 
                            
               }
            break;
            case '5':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                  ans[j][now] = '|';         
                       
                  ans[n+1][now+j] = '-';     
                      
                  ans[n+1+j][now+n+1] = '|'; 
                  ans[n*2+2][now+j] = '-';             
               }
            break;
            case '6':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                  ans[j][now] = '|';         
                       
                  ans[n+1][now+j] = '-';     
                  ans[n+1+j][now] = '|';     
                  ans[n+1+j][now+n+1] = '|'; 
                  ans[n*2+2][now+j] = '-';           
               }
            break;
            case '7':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                          
                  ans[j][now+n+1] = '|';     
                       
                  ans[n+1+j][now+n+1] = '|'; 
                              
               }
            break;
            case '8':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                  ans[j][now] = '|';         
                  ans[j][now+n+1] = '|';     
                  ans[n+1][now+j] = '-';     
                  ans[n+1+j][now] = '|';     
                  ans[n+1+j][now+n+1] = '|'; 
                  ans[n*2+2][now+j] = '-';            
               }
            break;
            case '9':
               for(int j=1;j<=n;j++){
                  ans[0][now+j] = '-';       
                  ans[j][now] = '|';         
                  ans[j][now+n+1] = '|';     
                  ans[n+1][now+j] = '-';     
                      
                  ans[n+1+j][now+n+1] = '|'; 
                  ans[n*2+2][now+j] = '-';           
               }
            break;
         }
      }
      for(auto &c:ans){
         for(auto &d:c){
            cout << d;
         }
         cout << endl;
      }
      cout << endl;
   }
}
/*
ans[0][now+j] = '-';       1
ans[j][now] = '|';         2
ans[j][now+n+1] = '|';     3
ans[n+1][now+j] = '-';     4
ans[n+1+j][now] = '|';     5
ans[n+1+j][now+n+1] = '|'; 6
ans[n*2+2][j] = '-';       7          
/*
3
10.00
20.00
30.00
4
15.00
15.01
3.00
3.01
0
*/
