#include <iostream>
using namespace std;

int main(){
    string a , b;
    cin >> a >> b;
    if(a.size() != b.size())    cout << "NO" << endl;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i] != b[a.size()-1-i]){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}