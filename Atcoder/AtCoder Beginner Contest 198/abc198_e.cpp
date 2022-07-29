// Problem: E - Unique Color
// Contest: AtCoder - AtCoder Beginner Contest 198
// URL: https://atcoder.jp/contests/abc198/tasks/abc198_e
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
const int SIZE = 1e5+7;

int c[SIZE],u[SIZE],ok[SIZE];
vector<int> v[SIZE];


void dfs(int now,int lt){
	if(u[c[now]]==0){
		ok[now]=1;
	}
	u[c[now]]++;
	for(int x:v[now]){
		if(x==lt)continue;
		dfs(x,now);
	}
	u[c[now]]--;
}

void solve(){
	int n;
	cin >> n;;
	for(int i=1;i<=n;i++){
		cin >> c[i];
	}
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1,1);
	for(int i=1;i<=n;i++){
		if(ok[i]==1){
			cout << i << '\n';
		}
	}
}


signed main(){
    IOS
    solve();
}

