#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cctype>
#include<deque>
#include<string>
#include<stack>
#include<string.h>
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<20;

void solve(){
    int n;
    cin >> n;
    bool b1=0,b2=0,f=0;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        if(i==1){
            if(x&1){
                b1=1;
            }else{
                b1=0;
            }
            continue;
        }
        else if(i==2){
            if(x&1){
                b2=1;
            }else{
                b2=0;
            }
            continue;
        }
        if(i&1){
            if(x&1 && b1==0){
                f=1;
            }
            if(x%2==0 && b1==1){
                f=1;
            }
        }else{
            if(x&1 && b2==0){
                f=1;
            }
            if(x%2==0 && b2==1){
                f=1;
            }
        }
    }
    if(f)cout << "NO" << '\n';
    else cout << "YES" << '\n';
}


signed main(){
    IOS
    T
    solve();
}


