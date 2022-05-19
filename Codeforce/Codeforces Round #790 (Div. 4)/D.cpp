// Problem: D. X-Sum
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/D
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
const int SIZE = 205;
int a[SIZE][SIZE];

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> a[i][j];
	int ans2=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
				int ans=a[i][j];
				int nowx=i-1,nowy=j-1;
				while(nowx>=0 && nowy>=0)ans+=a[nowx--][nowy--];
				nowx=i-1,nowy=j+1;
				while(nowx>=0 && nowy<m)ans+=a[nowx--][nowy++];
				nowx=i+1,nowy=j-1;
				while(nowx<n && nowy>=0)ans+=a[nowx++][nowy--];
				nowx=i+1,nowy=j+1;
				while(nowx<n && nowy<m)ans+=a[nowx++][nowy++];
				ans2=max(ans2,ans);
		}
	}
	cout << ans2 << '\n';
}


signed main(){
    IOS
    T
    solve();
}

