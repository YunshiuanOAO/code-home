//https://cses.fi/problemset/task/1094/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

int p[SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> p[i];
    int ans=0;
    for(int i=1;i<n;i++){
        if(p[i-1]>p[i]){
            ans+=p[i-1]-p[i];
            p[i]=p[i-1];
        }
    }
    cout << ans << '\n';
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
