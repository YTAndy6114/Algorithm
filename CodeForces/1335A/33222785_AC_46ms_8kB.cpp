#include <iostream>
using namespace std;

int main(){
    int n;
    long a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a<3) cout << 0 << endl;
        else cout << (a-1)/2 << endl;
    }
}
