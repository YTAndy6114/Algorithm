#include<bits/stdc++.h>
using namespace std;
int main(){
    int Case=1,n;
    double pricess;
    while(cin >> pricess >> n){
        vector<pair<int,double>> v(100);
        for(int i=0;i<n;i++)
            cin >> v[i].first >>v[i].second;
        vector<double> price(101,0);
        for(int i=1;i<=100;i++)
            price[i] = pricess*i;

        for(int i=0;i<n;i++){
            int num = v[i].first;
            double prices = v[i].second;
            for(int j=0;j<=100-num;j++)
                for(int k=1;k<=num;k++){
                    price[j + k] = min(price[j + k] , price[j] + prices);
                }
        }

        getchar();
        string s,tmp="";
        getline(cin,s);
        cout << "Case " << Case++ << ":\n";
        for(int i=0;i<s.length();i++){
            if(s[i] != ' ') tmp+=s[i];
            else {
                printf("Buy %d for $%.2f\n",stoi(tmp),price[stoi(tmp)]);
                tmp="";
            }
        }
        printf("Buy %d for $%.2f\n",stoi(tmp),price[stoi(tmp)]);
    }

}