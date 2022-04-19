#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=1e6;

int c[SIZE+1];

void solve(){
    int n;
    cin >> n;
    cout << c[n] << '\n';
}

void pre(){
    for(int i=1;i<=SIZE;i++)
        for(int j=i;j<=SIZE;j+=i)
            c[j]++;
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    pre();
    int t;
    cin >> t;
    while(t--)
        solve();
}
