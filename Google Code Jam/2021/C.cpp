// Problem: Apple Division
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1623
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
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
 
 
signed main(){
    IOS
    solve();
}
