// Problem: C - LCM of GCDs
// Contest: AtCoder - AtCoder Regular Contest 124
// URL: https://atcoder.jp/contests/arc124/tasks/arc124_c
// Memory Limit: 1024 MB
// Time Limit: 4000 ms
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
int a[SIZE],b[SIZE];
int n;

int lcm(int a,int b){
	return a*b/__gcd(a,b);
}

map<pair<int,int>,int> m[60];
int dfs(int now1,int now2,int nowi){
	if(n==nowi){
		return lcm(now1,now2);		
	}
	if(m[nowi][{now1,now2}] != 0)return m[nowi][{now1,now2}];
	
	int tmp1=dfs(__gcd(now1,a[nowi]),__gcd(now2,b[nowi]),nowi+1);
	int tmp2=dfs(__gcd(now1,b[nowi]),__gcd(now2,a[nowi]),nowi+1);
	
	m[nowi][{now1,now2}] = max(tmp1,tmp2); 
	
	return max(tmp1,tmp2);
}

void solve(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}	
	cout << dfs(a[0],b[0],1) << '\n';
}


signed main(){
    IOS
    solve();
}

