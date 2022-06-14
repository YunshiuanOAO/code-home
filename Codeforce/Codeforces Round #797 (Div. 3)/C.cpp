// Problem: C. Restoring the Duration of Tasks
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/C
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

int a[SIZE];
int b[SIZE];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++)cin >> b[i];
	vector<int> ans;
	int now=0;
	while(now<n){
		if(now==0){
			ans.push_back(b[now]-a[now]);
			now++;
			continue;
		}
		if(b[now-1]>a[now]){
			ans.push_back(b[now]-b[now-1]);
		}else{
			ans.push_back(b[now]-a[now]);
		}
		now++;
	}
	
	for(auto x:ans)cout << x << " ";
	cout << '\n';
}


signed main(){
    IOS
    T
    solve();
}

