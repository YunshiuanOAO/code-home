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

int a[SIZE];

void solve(){
	int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        ans1+=a[i]*a[i];
        ans2+=a[i];
    }
    cout << n*ans1-ans2*ans2 << '\n';
}


signed main(){
    IOS
    solve();
}

