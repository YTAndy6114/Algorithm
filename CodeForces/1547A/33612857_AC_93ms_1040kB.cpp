#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n-- > 0){
		int ax,ay,bx,by,fx,fy;
		cin >> ax >> ay >> bx >> by >> fx >> fy;
		
		if(ax == bx && bx == fx){
			if(ay > by && (ay > fy && fy > by)){
				cout << abs(bx-ax) + abs(by-ay) + 2 << endl;
			}
			else if(ay < fy && by > fy){
				cout << abs(bx-ax) + abs(by-ay) + 2 << endl;
			}
			else{
				cout << abs(bx-ax) + abs(by-ay) << endl;
			}
		}
		else if(ay == by && by == fy){
			if(ax > bx && (ax > fx && fx > bx)){
				cout << abs(bx-ax) + abs(by-ay) + 2 << endl;
			}
			else if(ax < fx && bx > fx){
				cout << abs(bx-ax) + abs(by-ay) + 2 << endl;
			}
			else{
				cout << abs(bx-ax) + abs(by-ay) << endl;
			}
		}
		else  cout << abs(bx-ax) + abs(by-ay) << endl;
		
		//25 21 23
	}
}