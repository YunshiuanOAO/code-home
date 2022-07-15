// Problem: B - Frog 2
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_b
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
const int SIZE = 1<<20;

int a[SIZE],dp[SIZE];

void solve(){
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
    	cin >> a[i];
    }
	dp[1]=0;
	for(int i=2;i<=n;i++)dp[i]=1e9;
	for(int i=2;i<=n;i++){
    	for(int j=1;j<=k;j++)
    		if(i-j>=1){
    			dp[i]=min(dp[i],dp[i-j]+abs(a[i-j]-a[i]));
    		}
    }
    cout << dp[n] << '\n';
}


signed main(){
    IOS
    solve();    
}

