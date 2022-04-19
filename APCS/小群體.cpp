#include<bits/stdc++.h>
using namespace std;
bool c[100000];
int main(){
    vector<int> v;
    int t,n;
    while(cin >> t){
        v.clear();
        int cnt=0;
        memset(c,0,100);
        for(int i=0;i<t;i++){
            cin >> n;
            v.push_back(n);
        }
        for(int i=0;i<t;i++){
            if(c[i]==0){
                if(v[i]==i){
                    cnt++;
                    c[i]=1;
                }else{
                    int next=i;
                    do{
                        c[next]=1;
                        next=v[next];
                    }while(c[next]==0);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }


}
