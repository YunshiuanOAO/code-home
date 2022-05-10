// Problem: B. Make It Increasing
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/B
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

void solve(){
	int n;
	bool flag=1;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i!=0){
			if(a[i]<=a[i-1])flag=0;
		}
	}
	if(flag){
		cout << 0 << '\n';
		return;
	}
	int ans=0;
	int now=0;
	while(now<n-1){
		if(a[now]>=a[now+1]){
			for(int i=now;i>=0;i--){
				if(i==0 && a[i]!=0){
					while(a[i]!=0 && a[i]>=a[i+1]){
						a[i]/=2;
						ans++;
					}
				}else if(a[i]>=a[i+1]){
					while(a[i]!=0 && a[i]>=a[i+1]){
						a[i]/=2;
						ans++;
					}
				}
			}
		}
		
		now++;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)cnt++; 
	}
	if(cnt<=1)
		cout << ans << '\n';
	else cout << -1 << '\n';
}


signed main(){
    IOS
    T
    solve();
}

