#include<iostream>
#include<stdio.h>
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
const int INT_MAX = 1e9+7;

int ans = 0;

bool check(int target){
	for(int i=2;i<=sqrt(target);i++){
		if(target%i==0){
			return 0;
		}
	}
	return 1;
}

void f(int l){
	for(int i=2;i<=l/2;i++){
		if(check(i) && check(l-i)){
			f(i);f(l-i);
			ans+=i;ans+=l-i;			
		}
	}
	return;
}


signed main(){
	int l;
	cin >> l;
	int ans2=INT_MAX;
	for(int i=2;i<=l/2;i++){
		if(check(i) && check(l-i)){
			ans=0;
			f(i);f(l-i);
			ans+=i;ans+=l-i;
			ans2=min(ans,ans2);		
		}
	}
	if(ans2==INT_MAX)ans2=0;
	cout << ans2 << '\n';
}
