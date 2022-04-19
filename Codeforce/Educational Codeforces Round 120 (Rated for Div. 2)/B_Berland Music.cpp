//https://codeforces.com/contest/1622/problem/B
#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=1e6;

pair<int,int> p[SIZE];
int ans[SIZE];
int MAX[SIZE];
int MIN[SIZE];

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;
}

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p[i].first;
        p[i].second=i;
    }
    string s;
    cin >> s;
    int cnt0=0,cnt1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            MIN[cnt0]=i;
            cnt0++;
        }else{
            MAX[cnt1]=i;
            cnt1++;
        }
    }
    cnt1=n;
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        if(s[p[i].second]=='0'){
            ans[p[i].second]=cnt0;
            cnt0--;
        }else{
            ans[p[i].second]=cnt1;
            cnt1--;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " " ;
    }
    cout << '\n';
}

void pre(){
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
}
