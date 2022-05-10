// Problem: B. A Perfectly Balanced String?
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/B
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

char cnt[30];
int u[30];

void solve(){
	memset(u,0,sizeof(u));
	string s;
	cin >> s;
	bool find=0,find2=0;
	for(int i=0;i<s.size();i++){
		if(i!=0 && s[i]!=s[i-1])find=1;
		if(i!=0 && s[i]==s[i-1])find2=1;
		u[s[i]-'a']=1;
	}
	if(find2==1 && find==1){
		cout << "NO" << '\n';
		return;
	}
	if(find==0){
		cout << "YES" << '\n';
		return;
	}
	for(int i=0;i<26;i++){
		int now=0;
		while(now<s.size()){
			if(s[now]=='a'+i){
				int now2=now+1;
				while(now2<s.size() && s[now2]!='a'+i)now2++;
				if(now2<s.size()){
					memset(cnt,0,sizeof(cnt));
					for(int j=now;j<=now2;j++){
						cnt[s[j]-'a']++;
					}
					for(int j=0;j<26;j++){
						if(u[j]==1){
							if(cnt[i]-cnt[j]>1){
								cout << "NO" << '\n';
								return;
							} 
						}
					}
				}
			}
			now++;
		}
	}
	cout << "YES" << '\n';
	
}


signed main(){
    IOS
    T
    solve();
}

