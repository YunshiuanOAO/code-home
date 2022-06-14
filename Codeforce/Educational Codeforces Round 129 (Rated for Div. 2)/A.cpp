// Problem: A. Game with Cards
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cctype>
#include<deque>
#include<string>
#include<stack>
#include<string.h>
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<20;

int a[SIZE];
int b[SIZE];

void solve(){
	int n,m;
	cin >> n ;
	for(int i=0;i<n;i++)cin >> a[i];
	cin >> m;
	for(int i=0;i<m;i++)cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	int nowa=0,nowb=0,nownum=0;
	bool turn=1;
	while(nowa<n && nowb<m){
		if(turn){
			while(nowa<n && a[nowa]<nownum)nowa++;
			if(nowa>=n){
				cout << "Bob" << '\n';
				break;
			}
			nownum=a[nowa];
			turn=0;
		}else{
			while(nowb<m && b[nowb]<=nownum)nowb++;
			if(nowb>=m){
				cout << "Alice" << '\n';
				break;
			}
			nownum=b[nowb];
			turn=1;
		}
	}
	
	nowa=0,nowb=0,nownum=0;
	turn=0;
	while(nowa<n && nowb<m){
		if(turn){
			while(nowa<n && a[nowa]<=nownum)nowa++;
			if(nowa>=n){
				cout << "Bob" << '\n';
				break;
			}
			nownum=a[nowa];
			turn=0;
		}else{
			while(nowb<m && b[nowb]<nownum)nowb++;
			if(nowb>=m){
				cout << "Alice" << '\n';
				break;
			}
			nownum=b[nowb];
			turn=1;
		}
	}
	
}


signed main(){
    IOS
    T
    solve();
}

