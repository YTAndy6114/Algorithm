#include <iostream>
using namespace std;

int main(){
    int x,sum=0;
    cin >> x;
    
    if(x>=5){
        sum += x/5;
        x -= 5*sum;
    }
    if(x!=0) sum++;
    cout << sum << endl;
}