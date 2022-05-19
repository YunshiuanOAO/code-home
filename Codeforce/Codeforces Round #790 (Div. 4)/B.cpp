// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/B
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

int a[SIZE];

void solve(){
	int n;
	cin >> n;
	int ans=0;
	int Min=10000004;
	for(int i=0;i<n;i++){
		cin >> a[i];
		Min=min(a[i],Min);
	}
	for(int i=0;i<n;i++)ans+=(a[i]-Min);
	cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();
}

