//https://atcoder.jp/contests/abc183/tasks/abc183_c
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;
int a[10][10];

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> p;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
        if(i!=1)
            p.push_back(i);
    }
    int cost,ans=0;
    do{
        cost=a[1][p[0]];
        for(int i=0;i<(int)p.size()-1;i++){
            cost+=a[p[i]][p[i+1]];
        }
        cost+=a[p[p.size()-1]][1];
        if(cost==k)ans++;
    }while(next_permutation(p.begin(),p.end()));
    cout << ans << '\n';


}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
