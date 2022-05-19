// Problem: G. White-Black Balanced Subtrees
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/G
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
	int n;
	vector<int> t[4004];
	for(int i=1;i<=n-1;i++){
		int x;
		cin >> x;
		t[x].push_back(i);
	}
	
	string s;
	cin >> s;
	int ans=0;
	for(int i=1;i<=4000;i++){
		if(t[i].size()>0){
			int w=0,b=0;
			for(int j=0;j<t[i].size();j++){
				if(s[t[i][j]]=='W')w++;
				else b++;
			}
			if(w==b)ans++;
		}
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();
}

