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

int a[SIZE],dp[SIZE];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];
	int ans=0;
	for(int i=0;i<n;i++){
		if(i==0)dp[i]=a[i];
		else dp[i]=min(dp[i-1],a[i]);
		ans=max(ans,a[i]-dp[i]);
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    solve();
}

