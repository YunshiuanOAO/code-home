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

int a[SIZE];

void solve(){
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++)cin >> a[i];
	sort(a,a+n);
	int people = n/k;
	int nowi=0,nowj=n-1;
	int ans=1;
	while(nowi<=nowj){
		int left=0,right=0;
		int tmp=people;
		if(people%2==1){
			left+=a[nowi];
			nowi++;
			tmp--;
		}
		for(int i=0;i<tmp/2;i++){
			left+=a[nowi++];
		}
		for(int i=0;i<tmp/2;i++){
			right+=a[nowj--];
		}
		ans*=(right+left);
	}
	cout << ans << '\n';
}


signed main(){
    IOS
    solve();
}

