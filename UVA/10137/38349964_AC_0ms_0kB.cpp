#include <bits/stdc++.h>
#define local
using namespace std;
bool cmp(int a, int b) { return a > b; }
int cost[1010];
int main(){
   int n;
   int x[1000];
   while(cin>>n && n){
      int avg=0,p=0;
      double ans=0;
      memset(x,0,sizeof(x));
      for(int i=0;i<n;i++){
         int a,b;char c;
         cin>>a>>c>>b;
         x[i] = a*100 + b;
         avg+=x[i];
      }
      p = avg%n;
      avg/=n;
      sort(x,x+n,greater<int>());
      for(int i=0;i<p;i++){
         ans += abs(x[i] - avg - 1);
      }
      for(int i=p;i<n;i++)
         ans += abs(avg - x[i]);
      printf("$%.2f\n",ans/200);
   }
}