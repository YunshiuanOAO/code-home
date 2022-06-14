// Problem: Trailing Zeros
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1618
// Memory Limit: 512 MB
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

int cnt2=0,cnt5=0;


void solve(){
	int n,cnt=0;
	cin >> n;
	if(n<5)cout << 0 << '\n';
	else{ 
		while(n>=5) {cnt+=n/5;n/=5;}
		cout << cnt << '\n';
	}
}


signed main(){
    IOS
    solve();
}

