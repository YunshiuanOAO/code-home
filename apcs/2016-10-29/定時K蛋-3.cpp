#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int K,M,N,j;
    //list<int> p;
    //list<int>::iterator it;
    vector<int> p;
    vector<int>::iterator it;
    while(cin >> N >> M >> K){
        int tmp=0,cnt=0,cnt1=0;
        p.clear();
        for(int i=1;i<=N;i++){
            p.push_back(i);
        }
        int now = 0;
        for(int i=0;i<K;i++){
            now=(now+M-1)%p.size();
//            for(it=p.begin(),j=0;j<=now;j++,it++){
//                if(j==now)p.erase(it);
//            }
            it=p.begin();
            p.erase(it+now);
        }
        now = now%p.size();
//        for(it=p.begin(),j=0;j<=now;j++,it++){
//            if(j==now)cout << *it << '\n';
//        }
        cout << p[now] << '\n';
    }

}
