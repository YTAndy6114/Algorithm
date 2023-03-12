#include <iostream>
using namespace std;

int main(){
    int n;
    string a;
    cin >> n;
    while(n--){
        cin >> a ;
        if(a.size()>10) cout << a[0] << a.size()-2 << a[a.size()-1] << endl;
        else cout << a << endl;
    }
    
}