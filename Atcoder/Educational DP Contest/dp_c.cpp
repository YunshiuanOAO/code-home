// Problem: C - Vacation
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_c
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

int a[100005][3],dp[100005][3];

void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)for(int j=1;j<=3;j++)cin >> a[i][j];
    dp[1][1]=a[1][1],dp[1][2]=a[1][2],dp[1][3]=a[1][3];
    for(int i=2;i<=n;i++){
    	for(int j=1;j<=3;j++){ 
    		for(int k=1;k<=3;k++){ 
    			if(j!=k)
    				dp[i][j]=max(dp[i][j],dp[i-1][k]+a[i][j]);	
    		}
    	}
    }
    cout << max(dp[n][1],max(dp[n][2],dp[n][3])) << '\n';
}


signed main(){
    IOS
    solve();    
}

