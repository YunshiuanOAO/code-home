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

int a[SIZE];
int ans[SIZE];
int k,n;

void f(int money,int i){
    if(money==0){
        cout << "(" ;
        for(int j=0;j<n-1;j++)cout << ans[j] << ",";
        cout << ans[n-1] << ")" << '\n';
        return;
    }
    if(i>=n)return;
    int time=money/a[i];
    for(int j=0;j<=time;j++){
        ans[i]=j;
        f(money-j*a[i],i+1);
    }
}

void solve(){
    cin >> n;
    for(int i=0;i<n;i++)cin >> a[i];
    cin >> k;
    f(k,0);
}


signed main(){
    IOS
    solve();
}


