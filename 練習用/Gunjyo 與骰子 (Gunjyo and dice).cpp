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
const int SIZE = 1e6+7;

int a[SIZE];

void solve(){
	int n;
	cin >> n;
	cout << a[n] << '\n';
}


signed main(){
    IOS
    for(int i=1;i<=100;i++){
    	for(int j=1;j<=100;j++){
    		for(int k=1;k<=100;k++){
    			a[i+j+k]++;
    			a[i*j+k]++;
    			a[i+j*k]++;
    			//a[i*k+j]++;
    			a[i*j*k]++;
    		}
    	}
    }
    T
    solve();
}

