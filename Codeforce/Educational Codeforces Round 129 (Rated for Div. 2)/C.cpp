// Problem: C. Double Sort
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/C
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
	
	bool flag1=1;
	bool flag2=1;
	int n,pre=0;
	cin >> n;
	vector<pair<int,int>> ans;
	a[n+1]=1000;
	b[n+1]=1000;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i-1] > a[i] || a[i] > a[i+1])flag1=1;
	}
	for(int i=1;i<=n;i++){
		if(b[i-1] > b[i] || b[i] > b[i+1])flag2=1;
	}
	
	if((flag1==0 && flag2==1) || (flag1==1 && flag2==0)){
		cout << "-1" << '\n';
		return;
	}
	for(int i=1;i<=n;i++){
		if(a[i]<a[i-1] || a[i]>a[i+1]){
			vector<pair<int,int>> v;
			for(int j=1;j<=n;j++){
				if(b[j]>=a[i-1] && b[j]<=a[i+1]){
					v.push_back(make_pair(j,b[j]));
				}
			}
			//for(pair<int,int> a:v)cout << a.first << " " << a.second << '\n';
			int mi=0,mn=101;
			for(int j=0;j<v.size();j++){
				if(v[j].second<mn){
					mi=v[j].first;
					mn=v[j].second;
				}
			}
			ans.push_back(make_pair(i,mi));
			swap(a[i],b[mi]);
		}
	}
	
	for(int i=1;i<=n;i++){
		if(b[i]<b[i-1] || b[i]>b[i+1]){
			vector<pair<int,int>> v;
			for(int j=n;j>=1;j--){
				if(b[i]>=a[j-1] && b[i]<=a[j+1]){
					v.push_back(make_pair(j,a[j]));
				}
			}
			//for(pair<int,int> a:v)cout << a.first << " " << a.second << '\n';
			int mi=0,mn=101;
			for(int j=0;j<v.size();j++){
				if(v[j].second<mn){
					mi=v[j].first;
					mn=v[j].second;
				}
			}
			
			ans.push_back(make_pair(i,mi));
			swap(b[i],a[mi]);
		}
	}
	
	cout << ans.size() << '\n';
	for(pair<int,int> x:ans)cout << x.first << " " << x.second << '\n';
}


signed main(){
    IOS
    T
    solve();
}

