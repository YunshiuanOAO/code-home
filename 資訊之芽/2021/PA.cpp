#include<bits/stdc++.h>
#define int long long 
#define Debug(a) cout << a << '\n';
#define MP(a,b) make_pair(a,b)
const int SIZE= 2e5+7;

using namespace std;

set<int> s;
int d[SIZE];


void solve(){
    int n,m,k,total;
    cin >> n >> m >> k;
    total=n*m;
    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        if(x&1){
            d[i]=m*x-(m-y);
            s.insert(m*x-(m-y));
        }else{
            d[i]=m*x-y+1;
            s.insert(m*x-y+1);
        }
    }
    sort(d,d+k);
    

    //判斷錯誤
    int pre=d[0];
    int fail=1;
    for(int i=1;i<k;i++){
        if(pre+1==d[i]){
            fail++;
        }else{
            fail=1;
        }
        if(fail==6){
            break;
        }
        pre=d[i];
    }
    if(fail==6){
        cout << "-1" << '\n';
        return;
    }

    int now=0;
    int ans=0;
    for(int i=0;i<k && now<total;i++){
        if(now>d[i])continue;
        int dis=d[i]-now;
        if(dis%6==0){
            now+=dis;
            if(dis!=0)
                ans+=dis/6;
            while(s.count(now)){
                now--;
            }
        }else{
            int tmp;
            if(dis%6==0){
                tmp=dis/6;
            }else{
                tmp=dis/6+1;
            }
            ans+=tmp;
            now+=tmp*6;
        }
        //Debug(now);
    }
    if(now<total){
        if((total-now)%6==0){
            ans+=(total-now)/6;
        }else{
            ans+=(total-now)/6+1;
        }
    }
    cout << ans << '\n';
    
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}