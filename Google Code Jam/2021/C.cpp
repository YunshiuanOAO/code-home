// Problem: Task
// Contest: Google Coding Competitions - Qualification Round 2021 - Code Jam 2021
// URL: https://codingcompetitions.withgoogle.com/codejam/round/000000000043580a/00000000006d12d7#problem
// Memory Limit: 1024 MB
// Time Limit: 10000 ms
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
#define T int _T;cin >> _T;while(_T--)cout << "Case#" << _T << ":";
using namespace std;
const int SIZE = 102;

void solve(){
	int n,c;
	int a[SIZE]={},b[SIZE]={};
	cin >> n >> c;
	if(c<n-1 || c>n*(n+1)/2-1)cout << "IMPOSSIBLE";
	else{
		c-=n-1; 
		for(int i=1;i<=n;i++)a[i]=i;
		for(int i=1;i<n;i++){
			if(c>=n-i){
				c-=n-i;
				reverse(a+i,a+n+1);
			}
		}
		for(int i=1;i<=n;i++)b[a[i]]=i;
		for(int i=1;i<=n;i++){
			cout << b[i] << " ";
		}
	}
}


signed main(){
    IOS
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
    	cout << "Case #" << i+1 << ": ";
    	solve();
    	if(i!=t-1)cout << '\n';
    }
    
}

