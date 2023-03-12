#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int Primes[N];
void IsPrime(){
	for(int i=2;i<=N;i++){
		if(!Primes[i]){
			for(int j=2;j*i<=N;j++){
				Primes[i*j] = 1;
			}
		}
	}
}
void solu(int d){
	bool t = 1;
	int a,b;
	for(int i=1+d;;i++){
		if(Primes[i] == 0){
			if(t){
				a = i;
				t = false;
			}			
			else if(i-a >= d){
				b = i;
				break;
			}
		}
	}
	cout << a*b << endl;
}
int main(){
	IsPrime();

	int n;
	cin >> n;
	while (n-- > 0){
		int d;
		cin >> d;
		solu(d);
	}

}