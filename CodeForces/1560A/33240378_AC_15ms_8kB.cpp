#include <iostream>

using namespace std;
void arg(int a[]){
    int count = 0;
    int x = 0;
    while(count != 1000){
        if(x%3 != 0 && x%10 != 3){
            a[count] = x;
            count++;
        }
        x++;
    }
}
int main(){
    int t,n;
    int temp[1000];
    arg(temp);
    cin >> t;
    while(t--){
        cin >> n;
        cout << temp[n-1] << endl;
    }
}
