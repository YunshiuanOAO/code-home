https://cses.fi/problemset/task/1623/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=1<<21;
int a[SIZE];

int get_bit(int x,int y){
    return (x>>y)&1;
}

void solve(){
    int n,sum=0;
    int ans=1LL<<60;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    int now=0;
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(get_bit(i,j)){
                now+=a[j];
                break;
            }else{
                now-=a[j];
            }
        }
        ans=min(ans,abs(sum-2*now));
    }
    cout << ans << '\n';
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
