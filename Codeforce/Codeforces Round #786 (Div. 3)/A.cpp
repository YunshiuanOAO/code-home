// Problem: A. Food for Animals
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

void solve(){
	int a,b,c,x,y,need=0;
	cin >> a >> b >> c >> x >> y;
	if(x>a)need+=x-a;
	if(y>b)need+=y-b;
	if(need>c){
		cout << "NO" << '\n';
		return;
	}
	cout << "YES" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

