//re
#pragma GCC optimize("Ofast")
#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
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
#include<random>
#include<chrono>
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
#define Mod(a,b) cout << a%b;
using namespace std;
using namespace __gnu_pbds;
const int SIZE = 1e6+7;
const int MOD = 1e9+7;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first == b.first)return a.second >b.second;
	else return a.first>b.first;
}
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
struct chash {
    const uint64_t C = (int)(2e18*acos((long double)-1))+71;
    const int RANDOM = rng();
    int operator()(int x) const {
    return __builtin_bswap64((x^RANDOM)*C); }
};
template<class K,class U> using ht = gp_hash_table<K,U,chash>;
 
void file(){
    #ifndef ONLINE_JUDGE
       freopen("D:\\programming\\CP\\1.in", "r", stdin);
       freopen("D:\\programming\\CP\\1.out", "w", stdout);
    #endif
}
int dp[1000];
int ans=0,n;

void solve(){
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i=4;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	}
	
	cout << dp[n] << '\n';	
}
 
signed main(){
    IOS    
    solve();
}
