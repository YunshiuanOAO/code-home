// Problem: D - Patisserie ABC
// Contest: AtCoder - AtCoder Beginner Contest 100
// URL: https://atcoder.jp/contests/abc100/tasks/abc100_d
// Memory Limit: 976 MB
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
const int SIZE = 1<<10;

int a[SIZE][3];

int n,m;

int f(){
	int d[SIZE]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			//cout << a[i][j] << " ";
			d[i]+=a[i][j];
		}
		//cout << '\n';
	}
	sort(d,d+n,greater<int>());
	int re=0;
	for(int i=0;i<m;i++){
		//cout << d[i] << " ";
		re+=d[i];
	}
	//cout << '\n';
	//cout << re << '\n';
	return re;
}

void solve(){
	cin >> n >> m;
	int ans=-1;
	for(int i=0;i<n;i++)for(int j=0;j<3;j++)cin >> a[i][j];
	for(int i=0;i<2;i++){
		for(int x=0;x<n;x++)a[x][0]*=-1;
		for(int j=0;j<2;j++){
			for(int x=0;x<n;x++)a[x][1]*=-1;
			for(int k=0;k<2;k++){
				for(int x=0;x<n;x++)a[x][2]*=-1;
				int now = f();
				ans=max(ans,now);
			}
		}
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    solve();
}

