// Problem: B. ICPC Balloons
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/B
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

void solve(){
    int n;
    string s;
	cin >> n;
    cin >> s;
    int cnt[30]={0};
    int ans=0;
    for(int i=0;i<n;i++){
    	if(cnt[s[i]-'A']==0){
    		ans++;
    	}
    	cnt[s[i]-'A']++;
    	ans++;
    }
    cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();    
}

