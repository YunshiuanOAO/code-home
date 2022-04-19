//https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

int p[SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=n-1;i++)
        cin >> p[i];
    sort(p+1,p+n);
    for(int i=1;i<=n;i++){
        if(p[i]!=i){cout << i;break;}
    }
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
