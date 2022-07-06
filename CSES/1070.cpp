//https://cses.fi/problemset/task/1070/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

int p[SIZE];

void solve(){
    int n;
    cin >> n;
    if(n==3 || n==2){
        cout << "NO SOLUTION" << '\n';
        return;
    } 
    for(int i=2;i<=n;i+=2)cout << i << " ";
    for(int i=1;i<=n;i+=2)cout << i << " ";
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
