#include<bits/stdc++.h>
using namespace std;
struct t
{
    int w;
    int s;
}Turtle[6000];
bool cmp(t a , t b){
    return a.s < b.s;
}
int main(){
    int x=0;
    while(cin >> Turtle[x].w >> Turtle[x].s) x++;
    int a[x+1] , maxa=0;
    sort(Turtle,Turtle+x,cmp);
    for(int i=1;i<=x;i++) a[i]=INT_MAX;
    a[0] = 0;

    for(int i=0;i<x;i++){
        for(int j=maxa;j>=0;j--){
            if(a[j]+Turtle[i].w <= Turtle[i].s && a[j]+Turtle[i].w < a[j+1]){
                a[j+1] = a[j]+Turtle[i].w;
                maxa = max(maxa,j+1); 
            }
        }
    }

    cout << maxa << endl;
}

