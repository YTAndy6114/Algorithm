#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d && (a+b+c+d)){
        int x = a*60+b;
        int y = c*60+d;
        if(x>y) cout << 24*60-x+y << endl;
        else cout << y-x << endl;
    }
}