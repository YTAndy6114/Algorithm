#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int m,n,k;

int main(){
    // 435 159 4568
    // 10 87 555
    while(cin >> m >> n >> k){
        if(m > n){
            int tmp = m;
            m = n;
            n = tmp;
        }
        
        if(k%m==0) {cout << k/m << endl; continue;}

        int Max = k-(k%m); // 4452
        int temp = Max   ; // 4452
        int Max_i = k/m;   // 28
        int ans_i = Max_i;
        int Max_j = 0;
        bool b = false;
        for(int i=1;i<=Max_i;i++){
            int cut = k - (Max - i * m);
            if(cut >= n){
                int can_add =  n * (cut / n);
                int test = (Max - i * m) + can_add;
                if(test > temp){
                    temp = test;
                    ans_i = i;
                    Max_j = cut / n;
                }
                if(test == k){
                    cout << Max_i - i + cut / n << endl;
                    b = true;
                    break;
                }
            }
        }
        if(b) continue;
        if(Max_j) ans_i = Max_i - ans_i;
        cout << ans_i + Max_j << " " << k-temp << endl;
    }
}