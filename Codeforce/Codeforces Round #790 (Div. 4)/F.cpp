// Problem: F. Longest Strike
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	int n,k;
	cin >> n >> k;	
	map<int,int> m;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> a[i];
		m[a[i]]++;
		if(m[a[i]]==k)v.push_back(a[i]);
	}
	if(v.size()==0){
		cout << -1 << '\n';
		return;
	}
	int ans=-1,ansl=-1,ansr=-1;
	sort(v.begin(),v.end());
	int pre,now;
	for(int i=0;i<v.size();i++){
		if(i==0){
			pre=v[i];
			now=v[i];
			continue;
		}
		if(v[i]!=pre+1){
			if(ans<v[i-1]-now){
				ans=v[i-1]-now;
				ansl=now;
				ansr=v[i-1];
			}
			pre=v[i];
			now=v[i];
		}else{
			pre++;
		}
	}
	if(ans<v[v.size()-1]-now){
		ans=v[v.size()-1]-now;
		ansl=now;
		ansr=v[v.size()-1];
	}
	cout << ansl << " " << ansr << '\n';
	
}


signed main(){
    IOS
    T
    solve();
}

