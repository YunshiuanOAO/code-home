// Problem: Distinct Numbers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1621
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

void solve(){
    int n;
    cin >> n;
    set<int> s;
    int ans=0;
    for(int i=0;i<n;i++){
    	int x;
    	cin >> x;
    	if(!s.count(x)){
    		ans++;
    		s.insert(x);
    	}
    }
    cout << ans << '\n';
}


signed main(){
    IOS
    solve();    
}

