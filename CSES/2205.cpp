// Problem: Gray Code
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2205/
// Memory Limit: 512 MB
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

vector<string> f(int n){
	if(n<=0){
		return {"0"};
	}else if(n==1){
		return {"0","1"};
	}
	vector<string> re=f(n-1);
	vector<string> main;
	for(int i=0;i<re.size();i++){
		main.push_back({"0"+re[i]});
	}
	for(int i=re.size()-1;i>=0;i--){
		main.push_back({"1"+re[i]});
	}
	return main;
}


void solve(){
	int n;
	cin >> n;
	vector<string> ans=f(n);
	for(int i=0;i<ans.size();i++)cout << ans[i] << '\n';
}


signed main(){
    IOS
    solve();
}

