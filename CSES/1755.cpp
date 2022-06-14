// Problem: Palindrome Reorder
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1755
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
const int SIZE = 1e6+7;

int cnt[30];
char ans[SIZE];


void solve(){
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++)ans[i]='Z';
	for(int i=0;i<s.size();i++)cnt[s[i]-'A']++;
	int no=0;
	int middle=-1;
	for(int i=0;i<26;i++){
		if(cnt[i]%2==1){
			middle=i;
			no++;
		}
	}
	if(no>1){
		cout << "NO SOLUTION" << '\n';
		return;
	}
	int l=0,r=s.size()-1;
	for(int i=0;i<26;i++){
		if(cnt[i]>0 && i!=middle){
			while(cnt[i]>0){
				ans[l]='A'+i;
				ans[r]='A'+i;
				cnt[i]-=2;
				
				l++,r--;
			}
		}
	}

	if(middle!=-1){
		while(cnt[middle]>2){
			ans[l]='A'+middle;
			ans[r]='A'+middle;
			l++,r--;
			cnt[middle]-=2;
		}
		ans[l]='A'+middle;
	}
	for(int i=0;i<s.size();i++)cout << ans[i];
}


signed main(){
    IOS
    solve();
}

