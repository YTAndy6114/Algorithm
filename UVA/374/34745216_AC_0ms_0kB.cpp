#include <bits/stdc++.h>
using namespace std;
long long int bigmod(int a,int b,int c){
    if(b == 0) return 1;
    if(b%2==0){
        return bigmod(a,b/2,c) * bigmod(a,b/2,c) % c;
    }
    else return bigmod(a,b-1,c) * (a%c) %c;
}
int main()
{
    int a,b,c;
    while(cin >> a >> b >> c){
        cout << bigmod(a,b,c) << endl;
    }
}