#include <iostream>
using namespace std;

int main(){
    int x;
    string a;
    cin >> x >> a;
    int D = 0 , A = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] == 'A') A++;
        else D++;
    }
    if(A > D) cout << "Anton" << endl;
    else if (A < D) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}