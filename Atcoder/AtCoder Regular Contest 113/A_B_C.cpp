//https://atcoder.jp/contests/arc113/tasks/arc113_a
//O(nlogn)

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=10000;

void solve(){
    int k,ans=0;
    cin >> k;
    for(int i=1;i<=k;i++)
        for(int j=1;i*j<=k;j++)
            ans+=k/(i*j);
    cout << ans << '\n';
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
