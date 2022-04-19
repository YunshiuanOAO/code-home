//https://codeforces.com/contest/1619/problem/E
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

int cnt[SIZE];

void solve(){
    priority_queue<int> pq;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<int> ans(n+1);
    int before_need=0;
    for(int i=0;i<=n;i++){
        ans[i]=cnt[i]+before_need;
        if(cnt[i]==0){
            if(!pq.size()){
                for(int j=i+1;j<=n;j++){
                    ans[j]=-1;
                }
                break;
            }
            int before_max=pq.top();
            pq.pop();
            before_need+=i-before_max;
        }
        for(int j=2;j<=cnt[i];j++){
            pq.push(i);
        }
    }
    for(int i=0;i<=n;i++){
        cout << ans[i] << ' ';
    }
    cout << '\n';
}
void pre(){
    memset(cnt,0,sizeof(cnt));
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        pre();
        solve();
    }
}
