// Problem: D. Double Strings
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/D
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
string s[SIZE];

void solve(){
    int n;
    cin >> n;
    set<string> se;
    for(int i=0;i<n;i++){
    	cin >> s[i];
    	se.insert(s[i]);
    }
    for(int i=0;i<n;i++){
    	bool Find=0;
    	for(int j=0;j<s[i].size();j++){
    		string tmp1,tmp2;
    		for(int k=0;k<=j;k++){
    			tmp1+=s[i][k];
    		}
    		for(int k=j+1;k<s[i].size();k++){
    			tmp2+=s[i][k];
    		}
    		if(se.count(tmp1) && se.count(tmp2)){
    			cout << "1";
    			Find=1;
    			break;
    		}
    		//cout << tmp1 << " " << tmp2 << '\n';
    	}
    	if(Find==0){
    		cout << 0 ;
    	}
    }
    cout << '\n';
}


signed main(){
    IOS
    T
    solve();    
}

