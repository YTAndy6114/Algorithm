#include<bits/stdc++.h>
#define M 2e9+1
#define mem(a) memset(a,0,sizeof(a));
using namespace std;

vector<long long int> v;
int binarySearch(long n){
    int start = 0;
    int end = v.size()-1;
    while(end >= start){
        int mid = (start+end)/2;

        if(n == v[mid]) return mid;

        else if(n < v[mid]){
            if(n >= v[mid-1]) return mid-1;
            end = mid-1;
        }

        else{
            if(n < v[mid+1]) return mid;
            else if(n == v[mid+1]) return mid+1;
            start = mid+1;
        }
    }
}
void handle(){
    mem(&v);
    long temp=0,tempx=2,tempy=4,b=1,n=1;
    v.push_back(2);v.push_back(4);
    while(temp<=M){
        if(b){
            tempx=tempx+8*n-1;
            tempy++;
            v.push_back(tempy);
            v.push_back(tempx);
            b=0;
        }
        else{
            tempx++;
            tempy=tempy+8*n+3;
            v.push_back(tempx);
            v.push_back(tempy);
            n++;
            b=1;
        }
        temp=max(tempx,tempy);
    }
}
int main(){
    long n,temp;
    handle();
    while(cin>>n && n){
        if(n==1){cout << "1 1\n";continue;}
        int low_bound = binarySearch(n);
        if(n==v[low_bound]){
            if(low_bound%2==0){
                if(!low_bound) cout << "1 2";
                else if((low_bound/2)%2==0) cout << "1 " << (4+(low_bound/4-1)*2);
                else cout << (3+(low_bound-2)/4*2) << " 1";
            }
            else{
                low_bound++;
                if((low_bound/2)%2==0) cout << "1 " << (4+(low_bound/4-1)*2)-1;
                else cout << (3+(low_bound-2)/4*2)-1 << " 1";
            }
        }
        else{
            int mid,t=0;
            if(low_bound%2==0) {mid = (v[low_bound]+v[low_bound+1])/2;t=low_bound/2+2;}
            else {mid = (v[low_bound-1] + v[low_bound])/2;t=(low_bound-1)/2+2;}
            // cout << "mid=" << mid;
            if(n==mid) cout << t << " " << t;
            else if(t%2==1){
                if(n>mid) cout << t-(n-mid) << " " << t;
                else cout << t << " " << t-(mid-n);    
            }
            else{
                if(n>mid) cout << t << " " << t-(n-mid);
                else cout << t-(mid-n) << " " << t;
            }
        }
        cout << "\n";
    }
}