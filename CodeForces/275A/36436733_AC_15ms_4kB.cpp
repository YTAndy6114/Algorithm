#include <iostream>
using namespace std;
int n[3][3];
int x=0;
int main(){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            n[i][j] = 1;
        }
    }

      
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cin >> x;
            if(x%2==1){
                if(i-1 >= 0) n[i-1][j] = (n[i-1][j] + 1) % 2;
                if(i+1 < 3) n[i+1][j] = (n[i+1][j] + 1) % 2;
                if(j-1 >= 0) n[i][j-1] = (n[i][j-1] + 1) % 2;
                if(j+1 < 3) n[i][j+1] = (n[i][j+1] + 1) % 2;
                n[i][j] = (n[i][j] + 1) % 2;
            }
        }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << n[i][j];
        }
        cout << "\n";
    }

}
