#include<bits/stdc++.h>
using namespace std;

vector<int>position;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int L,n,x,i;
    cin >> n >> L;
    position.resize(n);
    for(int t=0;t<n;t++){
        int p,o;
        cin >> p >> o;
        position[o-1]=p;
    }
    set<int> data;
    data.insert(0);
    data.insert(L);
    long long int cost=0;
    for(int i=0;i<n;i++){
        data.insert(position[i]);
        int p1=*(data.upper_bound(position[i]));
        int p2=*(--(data.lower_bound(position[i])));
        cost+=p1-p2;
    }
    cout << cost << '\n';
}
