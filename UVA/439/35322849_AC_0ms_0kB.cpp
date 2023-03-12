#include <bits/stdc++.h>
using namespace std;
int movex[8] = {1,1,2,2,-1,-1,-2,-2};
int movey[8] = {2,-2,1,-1,2,-2,1,-1};
int main(){
	string s1,s2;
	while(cin >> s1 >> s2){
		int record[8][8] = {0} , count=0;
		int fromx = abs(s1.at(1)-'8') , fromy = s1.at(0)-'a' , orderx = abs(s2.at(1)-'8'), ordery = s2.at(0)-'a';
		queue<pair<int,int>> q;
		q.push(make_pair(fromx,fromy));
		q.push(make_pair(-1,-1));
		while(!q.empty()){
			int x = q.front().first , y = q.front().second;	
			if(x==-1 && y==-1){
				count++;
				q.pop();
				q.push(make_pair(-1,-1));
				continue;
			}
			if(x==orderx && y==ordery){
				cout << "To get from " << s1 << " to "<< s2 << " takes " << count <<" knight moves." <<endl;
				break;
			}
			record[x][y] = 1;
			for(int i=0;i<8;i++){
				if( x+movex[i] < 8 && x+movex[i] > -1 && y+movey[i] < 8 && y+movey[i] > -1 && !record[x+movex[i]][y+movey[i]]){
					q.push(make_pair(x+movex[i],y+movey[i]));
					record[x+movex[i]][y+movey[i]] = 1;
				}
			}
			q.pop();
		}
	}
}
/*
	e2 e4
	a1 b2
	b2 c3
	a1 h8
	a1 h7
	h8 a1
	b1 c3
	f6 f6
*/
