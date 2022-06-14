// Problem: B. AND Sorting
// Contest: Codeforces - Codeforces Round #793 (Div. 2)
// URL: https://codeforces.com/contest/1682/problem/B
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
const int SIZE = 2e5+7;

int a[SIZE];

void solve(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n;i++){
		if(a[i]!=i){
			v.push_back(a[i]);
			
		}
	}
	int ans=v[0];
	for(int i=1;i<v.size();i++){
		ans=ans&v[i];
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();
}

