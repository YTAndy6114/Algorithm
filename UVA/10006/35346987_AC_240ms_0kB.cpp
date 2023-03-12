#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
long long pow(long long a,long long n,long long m){
    if(n==0) return 1;
    if(n%2==0){
        long long x = pow(a,n/2,m);
        return (x*x) % m;
    }
    else
        return ((a%m)*pow(a,n-1,m))%m;
}
int main(){
    int n;
    while(cin >> n && n){
        bool t = true;
        if(is_Prime(n)){
            printf("%d is normal.\n",n);
            continue;
        }
        for(long long i=2;i<n;i++){
            if(pow(i,n,n) != i){
                t = false;
                break;
            }
        }
        if(t) printf("The number %d is a Carmichael number.\n",n);
        else printf("%d is normal.\n",n);
    }
        
}