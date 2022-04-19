//https://cses.fi/problemset/task/1072/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int k=i*i;
        cout << k*(k-1)/2-4*(i-1)*(i-2) << '\n';
    }
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
