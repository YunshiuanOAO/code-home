// Problem: F. Interesting Function
// Contest: Codeforces - Codeforces Round #725 (Div. 3)
// URL: https://codeforces.com/contest/1538/problem/F
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

int f(int x){
	int re=x;
	int cnt=x;
	while(x){
		cnt-=x%10;
		x/=10;
	}
	return re+cnt/9;
}


void solve(){
	int r,l;
	cin >> l >> r;
	cout << f(r)-f(l) << '\n';
}


signed main(){
    IOS
    T
    solve();
}

