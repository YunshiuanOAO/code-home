//https://codeforces.com/contest/1619/problem/B
#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=2005;

int a[SIZE];

void solve(){
    set<int> s;
    int n;
    cin >> n;
    int cnt=1;
    for(int i=2;i<=100000;i++){
        int sum1=i*i;
        int sum2=i*i*i;
        if(n>=sum1 && !s.count(sum1)){
            s.insert(sum1);
            cnt++;
        }
        if(n>=sum2 && !s.count(sum2)){
            s.insert(sum2);
            cnt++;
        }
    }
    cout << cnt << '\n';
}
signed main(){
    //ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
}
