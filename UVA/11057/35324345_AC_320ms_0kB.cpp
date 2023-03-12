#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int m=0,dif=INT_MAX,ansx=0,ansy=0;
        int x[n];
        for(int i=0;i<n;i++)
            cin >> x[i];
        cin >> m;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(x[i] + x[j] == m & abs(x[i]-x[j]) < dif){
                    dif = abs(x[i]-x[j]);
                    ansx=x[i];
                    ansy=x[j];
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",min(ansx,ansy),max(ansx,ansy));
    }
}