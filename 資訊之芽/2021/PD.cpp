#include<bits/stdc++.h>
#define int long long 
#define Debug() cout << "Hello world" << '\n';
using namespace std;

int paper[101][101];

int ln=1,lm=1,rn,rm;

//////////////////////////////////////////////////////////////////////////////

void leftturn(int k){
    for(int i=ln;i<=rn;i++){
        int leftm=lm+k-1;
        int rightm=lm+k;
        int cnt=k;
        while(cnt--){
            paper[i][rightm]+=paper[i][leftm];
            leftm--;
            rightm++;
        }
    }
    lm+=k;
}

void rightturn(int k){
    for(int i=ln;i<=rn;i++){
        int leftm=rm-k;
        int rightm=rm-k+1;
        int cnt=k;
        while(cnt--){
            paper[i][leftm]+=paper[i][rightm];
            leftm--;
            rightm++;
        }
    }
    rm-=k;
}

void upturn(int k){
    for(int i=lm;i<=rm;i++){
        int leftn=ln+k-1;
        int rightn=ln+k;
        int cnt=k;
        while(cnt--){
            paper[rightn][i]+=paper[leftn][i];
            leftn--;
            rightn++;
        }
    }
    ln+=k;
}

void downturn(int k){
    for(int i=lm;i<=rm;i++){
        int leftn=rn-k;
        int rightn=rn-k+1;
        int cnt=k;
        while(cnt--){
            paper[leftn][i]+=paper[rightn][i];
            leftn--;
            rightn++;
        }
    }
    rn-=k;
}

/////////////////////////////////////////////////////////////////////////////////


void luturn(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            paper[ln+k-i+j][lm+k-j]+=paper[ln+j][lm+i-j];
            paper[ln+j][lm+i-j]=0;
        }
    }
}

void ldturn(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            paper[rn-k+j][lm+k-i+j]+=paper[rn-i+j][lm+j];
            paper[rn-i+j][lm+j]=0;
        }
    }
}

void ruturn(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            paper[ln+k-i+j][rm-k+j]+=paper[ln+j][rm-i+j];
            paper[ln+j][rm-i+j]=0;
        }
    }
}

void rdturn(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            paper[rn-k+j][rm-k+i-j]+=paper[rn-i+j][rm-j];
            paper[rn-i+j][rm-j]=0;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void solve(){
    int q;
    cin >> rn >> rm >> q;
    for(int i=1;i<=rn;i++)
        for(int j=1;j<=rm;j++)
            cin >> paper[i][j];
    while(q--){
        string ch;
        int k;
        cin >> ch;
        cin.get();
        cin >> k;
        if(ch=="L"){
            leftturn(k);
        }else if(ch=="R"){
            rightturn(k);
        }else if(ch=="D"){
            downturn(k);
        }else if(ch=="U"){
            upturn(k);
        }else if(ch=="LD"){
            ldturn(k);
        }else if(ch=="LU"){
            luturn(k);
        }else if(ch=="RD"){
            rdturn(k);
        }else{
            ruturn(k);
        }
        /*cout << ln << " " << rn << " " << lm << " " << rm << '\n';
        for(int i=ln;i<=rn;i++){
            for(int j=lm;j<=rm;j++){
                cout << paper[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';*/
    }
    //cout << rn << " " << rm << " " << ln << " " << lm << '\n';
    cout << rn-ln+1 << " " << rm-lm+1 << '\n';
    for(int i=ln;i<=rn;i++){
        for(int j=lm;j<=rm;j++){
            cout << paper[i][j] << " ";
        }
        cout << '\n';
    }
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}