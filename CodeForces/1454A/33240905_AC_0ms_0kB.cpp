#include <iostream>

using namespace std;
int main(){
    int t , n , temp;
    cin >> t;
    while(t--){
        cin >> n;
        int x[n];
        for(int i=0;i<n;i++) x[i] = n-i;
        if(n%2!=0){
            temp = x[n/2];
            x[n/2] = x[n/2+1];
            x[n/2+1] = temp;
        }
        for(int i=0;i<n-1;i++) cout << x[i] << " ";
        cout << x[n-1] << endl;
    }
}
