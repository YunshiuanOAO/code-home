// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/D
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


void solve(){
	int n,k;
	cin >> n >> k ;
	string s;
	cin >> s;
	int cnt=0;
	int tmp=0;
	
	map<int,int> m;
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			cnt++;
		}else{
			for(int j=tmp;j<=i-1;j++){
				m[j]=cnt;
			}
			m[i]=0;
			tmp=i+1;
			cnt=0;
		}
	}
	for(pair<int,int> x:m)if(x.second==k){cout << 0 << '\n';return;}
	int ma=-1;
	for(pair<int,int> x:m){
		ma=max(ma,x.second);
	}
	int now=0;
	for(pair<int,int> x:m){
		if(x.second==ma){now=x.first;break;}
	}

	tmp=now;
	int cnt2=0;
	int ans=0;
	while(now<n){
		if(s[now]=='W')ans++;
		if(m[now]>0)cnt2++;
		if(ans+cnt2>=k){
			cout << ans << '\n';
			return;
		}
		now++;
	}
	cnt2=0;
	now=tmp-1;
	while(now>=0){
		if(s[now]=='W')ans++;
		if(m[now]>0)cnt2++;
		if(ans+cnt2>=k){
			cout << ans << '\n';
			return;
		}
		now--;
	}
	cout << 0 << '\n';
}


signed main(){
    IOS
    T
    solve();
}
 