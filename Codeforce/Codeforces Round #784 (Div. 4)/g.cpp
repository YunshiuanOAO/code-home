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

char c[100][100];
int n,m;

void turn(int i,int j){
    int nowi=i;
    bool flag=0;
    while(nowi+1<n && c[nowi+1][j]!='o' && c[nowi+1][j]!='*'){flag=1;nowi++;}
    if(flag){
        c[nowi][j]='*';
        c[i][j]='.';
    }
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> c[i][j];
    
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(c[i][j]=='*'){
                turn(i,j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << c[i][j];
        }
        cout << '\n';
    }
    cout << '\n';

}


signed main(){
    IOS
    T
    solve();
}


