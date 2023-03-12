#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    int B = 0 , L = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i] <= 'z') L++;
        else B++;
    }
    if(B > L){
        for(int i=0;i<a.size();i++){
            a[i] = toupper(a[i]);
        }
    }
    else{
        for(int i=0;i<a.size();i++){
            a[i] = tolower(a[i]);
        }
    }
    cout << a << endl;
}