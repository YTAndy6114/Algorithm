#include <bits/stdc++.h>
using namespace std;
long long int number(int a,int b){
    long long int sum = 0;
    for(long long int i=1;i<=a+b;i++)
        sum+=i;
    return sum + a + 1;
}
int main(){
    int n;
    int C = 1;
    cin >> n;
    while(n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << "Case " << C++ << ": " << abs(number(a,b)-number(c,d)) << endl;
    }  
}