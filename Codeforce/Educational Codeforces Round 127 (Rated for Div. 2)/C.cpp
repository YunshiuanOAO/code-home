// Problem: C. Dolce Vita
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/C
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
	int n,x,sum=0;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	int time=0,ans=0,alltime=0;
	sort(a,a+n);
	int last=-1;
	for(int i=n-1;i>=0;i--){
		if(x-sum>=0){
			time=(x-sum)/(i+1);
			ans+=(i+1)*(time-last);
			last=time;
		}
		sum-=a[i];
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();
}

