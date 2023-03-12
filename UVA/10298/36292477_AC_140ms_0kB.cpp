#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin >> s && s != "."){
        int ans = 1;
        int N = s.length();
        for(int i=1;i<=N;i++){
            if(s.length()%i==0){
                string temp = s.substr(0,i);
                bool flag = true;
                for(int j=i;j<N;j+=i){
                    if(temp != s.substr(j,i)){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    cout << s.length() / i << endl;
                    break;
                }
            }
        }
    }
}