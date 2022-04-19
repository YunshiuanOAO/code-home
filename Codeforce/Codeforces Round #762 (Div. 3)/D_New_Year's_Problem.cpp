//https://codeforces.com/contest/1619/problem/D
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=1e5+2;
const int MAX=1e9+7;

vector<pair<int,int> > p[SIZE];

int n,m;

void solve(){
    //n=商店 m=人 
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            p[j].push_back({x,i});
        }
    }

    for(int i=0;i<n;i++){
        sort(p[i].begin(),p[i].end(),greater<pair<int,int>>());
    }
    int l=1,r=MAX;
    while(l<r){
        int mid=(l+r+1)/2;
        //cout << l << " " << mid << " " << r << '\n';
        vector<bool> u(m+1);
        bool flag=0;
        for(int i=0;i<n;i++){
            if(p[i][0].first<mid){
                flag=0;
                break;
            }
            for(int j=0;j<m;j++){
                if(p[i][j].first>=mid){
                    if(u[p[i][j].second]){
                        flag=1;
                    }
                    u[p[i][j].second]=1;
                }else{
                    break;
                }
            }
        }
        if(flag) l=mid;
        else r=mid-1;
    }
    cout << l << '\n';
}
void pre(){
    for(int i=0;i<n;i++){
        p[i].clear();
    }
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
