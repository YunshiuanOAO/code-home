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
const int SIZE = 2e+7;

int a[SIZE],b[SIZE],c[SIZE],d[SIZE],e[SIZE],f[SIZE];
int sum[SIZE];
int t[SIZE];
void solve(){
    int n,m;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i];
        sum[i]=a[i]+b[i]+c[i]+d[i]+e[i]+f[i];
    }
    int q;
    cin >> q;
    for(int i=1;i<=n;i++)t[i]=a[i];
    sort(t+1,t+n+1);

    for(int i=1;i<=n;i++)t[i]=sum[i];
    sort(t+1,t+n+1);
    m=unique(t+1,t+n+1)-t-1;
    for(int i=1;i<=n;i++){
        sum[i]=lower_bound(t+1,t+m+1,sum[i])-t;
    }
    
    while(q--){
        int p,s;
        cin >> p >> s;
        if(s==1){
            cout << n-a[p]+1 << '\n';
        }else if(s==2){
            cout << n-b[p]+1 << '\n';
        }else if(s==3){
            cout << n-c[p]+1 << '\n';
        }else if(s==4){
            cout << n-d[p]+1 << '\n';
        }else if(s==5){
            cout << n-e[p]+1 << '\n';
        }else if(s==6){
            cout << n-f[p]+1 << '\n';
        }else{
            cout << n-sum[p]+1 << '\n';
        }
    }
}



signed main(){
    IOS
    solve();
}


