#include<bits/stdc++.h>
#define int long long 
#define Debug() cout << "Hello world" << '\n';
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;
    string s,ans; 
    cin.get();
    getline(cin,s);
    ans=s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='a'){
            string l,r;
            int left=i-2,right=i+4,cnt=0;
            while(left>=0){
                if(s[left]==')')cnt++;
                else if(s[left]=='(')cnt--;
                l+=s[left];
                left--;
                if(cnt==0)break;
            }
            reverse(l.begin(),l.end());
            cnt=0;
            while(right<s.size()){
                if(s[right]=='(')cnt++;
                else if(s[right]==')')cnt--;
                r+=s[right];
                right++;
                //cout << r << '\n';
                if(cnt==0)break;
            }
            
            string lastl,lastr;
            bool flag1=0,flag2=0;
            for(int i=0;i<=left;i++){
                lastl+=s[i];
                if(s[i]=='(')flag1=1;
            }
            if(!flag1){
                l=lastl+l;
                lastl.clear();
            }
            for(int i=right;i<s.size();i++){
                lastr+=s[i];
                if(s[i]==')')flag2=1;
            }
            if(!flag2){
                r=r+lastr;
                lastr.clear();
            }
            if(l[0]!='('){
                l="( "+l+" )";
                m+=2;
            }

            if(r[0]!='('){
                r="( "+r+" )";
                m+=2;
            }
            l="not ( ( not " + l + " )";
            r="( not "+ r +" ) )";
            ans=lastl+l+" or "+r+lastr;
            m+=9;
            s=ans;
        }
        i++;
    }
    cout << m << '\n';
    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}