//https://atcoder.jp/contests/arc124/tasks/arc124_b
//利用xor性質 a xor b = c 所以 a xor c = b
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2001;
int a[SIZE];
int b[SIZE];
int c[SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<int> ans;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){ 
        int now=a[0]^b[i];
        for(int j=0;j<n;j++){
            c[j]=a[j]^now;
        }
        sort(c,c+n);
        bool err=0;
        for(int j=0;j<n;j++){
            if(b[j]!=c[j]){
                err=1;
                break;
            }
        }
        if(!err){
            ans.push_back(now);
        }
    }
    cout << (int)ans.size() << '\n';
    for(int i=0;i<(int)ans.size();i++)
        cout << ans[i] << '\n' ;

}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
