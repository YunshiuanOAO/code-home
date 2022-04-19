#include<iostream>
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
#define T int t;cin >> t;while(t--) 
using namespace std;
const int SIZE = 1<<20;

pair<int,int> a[SIZE];

int turn(int n){
	string s;
	while(n!=0){
		s+=to_string(n%2);
		n/=2;
	}
	int re=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1')re++;
	}
	return re;
}

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i].first;
		int cnt = turn(a[i].first);
		a[i].second = cnt;
	}	
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout << a[i].first << " ";
	}

}

signed main(){
	IOS
	solve();	
}

