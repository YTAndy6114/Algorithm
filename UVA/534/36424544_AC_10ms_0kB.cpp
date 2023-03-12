#include <bits/stdc++.h>
using namespace std;
double x[202], y[202];
double dist[202][202];
 
int main(){
    int n,t=1;
    while(cin >> n && n){
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        memset(dist,0,sizeof(dist));
        for(int i=0;i<n;i++)
            cin >> x[i] >> y[i];

        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                dist[i][j] = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                dist[j][i] = dist[i][j];
            }

        for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){

            double max = dist[i][k]>dist[k][j]?dist[i][k]:dist[k][j];
            if(dist[i][j] > max)
                dist[i][j] = max;
        }
        printf("Scenario #%d\n", t++);
        printf("Frog Distance = %.3lf\n\n", dist[0][1]);
    }
}