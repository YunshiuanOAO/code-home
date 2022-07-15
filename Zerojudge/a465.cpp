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
	cin >> n >> s;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='.'){
			ans++;
			for(int j=0;j<3 && i+j<n;j++){
				s[i+j]='#';
			}
		}
	}
	cout << ans;
}


signed main(){
    IOS
	int t,c=1;
	cin >> t;
	while(t--){
    		cout << "Case " << c++ << ": ";
    		solve();
    		if(t!=0)cout << '\n';
    	}    
}

