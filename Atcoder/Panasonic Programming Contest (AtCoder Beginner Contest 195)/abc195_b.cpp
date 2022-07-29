// Problem: B - Many Oranges
// Contest: AtCoder - Panasonic Programming Contest (AtCoder Beginner Contest 195)
// URL: https://atcoder.jp/contests/abc195/tasks/abc195_b
// Memory Limit: 1024 MB
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

void solve(){
	int a,b,w;
	cin >> a >> b >> w;
	w*=1000;
	int ans1=-1,ans2=1e9;
	for(int now=1;now<=1000000;now++){
		if(a*now<=w && b*now>=w){
			ans2=min(ans2,now);
			ans1=max(ans1,now);
		}
	}
	if(ans1==-1 || ans2 == 1e9) cout << "UNSATISFIABLE" << '\n';
	else cout << ans2 << " " << ans1 << '\n';
}


signed main(){
    IOS
    solve();
}

