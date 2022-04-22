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

int nums[SIZE];

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(nums[x]==0){
            ans.push_back(x);
        }
        nums[x]++;
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << '\n';
    for(auto i:ans)cout << i << " ";
}


signed main(){
    IOS
    solve();
}


