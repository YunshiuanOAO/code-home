// Problem: B. Card Trick
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/B
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
const int SIZE = 2e5+7;

int a[SIZE];
int b[SIZE];

void solve(){
	int n,m;
	cin >> n;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[i]=x;
	}
	int now=0;
	cin >> m;
	for(int i=0;i<m;i++){
		int y;
		cin >> y;
		now=(now+y)%n;
	}
	cout << a[now] << '\n';
}


signed main(){
    IOS
    T
    solve();
}

