#include<bits/stdc++.h>
#define int long long 
#define Debug() cout << "Hello world" << '\n';
using namespace std;

vector<pair<char,char>> Card;
vector<pair<char,char>> chi_and_pon;

bool cmp(pair<char,char> a,pair<char,char> b){
    if(b.second==a.second){
        return a.first<b.first;
    }else{
        return a.second<b.second;
    }
}

void output(){
    for(int i=0;i<Card.size();i++){
        cout << Card[i].first;
    }
    for(int i=0;i<chi_and_pon.size();i++){
        cout << chi_and_pon[i].first;
    }
    //cout << chi_and_pon.size();
    cout << '\n';
    for(int i=0;i<Card.size();i++){
        cout << Card[i].second;
    }
    for(int i=0;i<chi_and_pon.size();i++){
        cout << chi_and_pon[i].second;
    }
    cout << '\n';
}


void insert(string s){
    char a=s[7],b=s[8],c=s[16],d=s[17];
    for(int i=0;i<Card.size();i++){
        if(Card[i].first==c && Card[i].second==d){
            Card[i].first=a;
            Card[i].second=b;
            break;
        }
    }
    sort(Card.begin(),Card.end(),cmp);
}

void pon(string s){
    char pa=s[4],pb=s[5],ta,tb;
    if(s[12]=='l'){
        ta=s[23],tb=s[24];
        for(int i=0;i<Card.size();i++){
            if(Card[i].first==pa && Card[i].second==pb){
                Card.erase(Card.begin()+i);
                Card.erase(Card.begin()+i);
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pa));
                break;
            }
        }
    }else if(s[12]=='o'){
        ta=s[27],tb=s[28];
        for(int i=0;i<Card.size();i++){
            if(Card[i].first==pa && Card[i].second==pb){
                Card.erase(Card.begin()+i);
                Card.erase(Card.begin()+i);
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pa));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                break;
            }
        }
    }else{
        ta=s[24],tb=s[25];
        for(int i=0;i<Card.size();i++){
            if(Card[i].first==pa && Card[i].second==pb){
                Card.erase(Card.begin()+i);
                Card.erase(Card.begin()+i);
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',pa));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                chi_and_pon.insert(chi_and_pon.begin(),make_pair(pa,pb));
                break;
            }
        }
    }
    for(int i=0;i<Card.size();i++){
        if(Card[i].first==ta && Card[i].second==tb){
            Card.erase(Card.begin()+i);
            break;
        }
    }
}

void chi(string s){
    char ca=s[4],cb=s[5],ua1=s[11],ub1=s[12],ua2=s[18],ub2=s[19],ta=s[27],tb=s[28];
    for(int i=0;i<Card.size();i++){
        if(Card[i].first==ua1 && Card[i].second==ub1){
            Card.erase(Card.begin()+i);
            for(int j=i;i<Card.size();j++){
                if(Card[j].first==ua2 && Card[j].second==ub2){
                    Card.erase(Card.begin()+j);
                    chi_and_pon.insert(chi_and_pon.begin(),make_pair(ua2,ub2));
                    chi_and_pon.insert(chi_and_pon.begin(),make_pair(ua1,ub1));
                    chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',cb));
                    chi_and_pon.insert(chi_and_pon.begin(),make_pair('.',ca));
                    break;
                }
            } 
            break;
        }
    }
    for(int i=0;i<Card.size();i++){
        if(Card[i].first==ta && Card[i].second==tb){
            Card.erase(Card.begin()+i);
            break;
        }
    } 
}


void solve(){
    int q;
    string card;
    getline(cin,card);
    //cout << card << '\n';
    int tmp=0;
    while(tmp<card.size()){
        Card.push_back(make_pair(card[tmp],card[tmp+1]));
        tmp+=3;
    }
    sort(Card.begin(),Card.end(),cmp);
    output();
    cin >> q;
    cin.get();
    while(q--){
        string step;
        getline(cin,step);
        if(step[0]=='i'){
            insert(step);
        }
        else if(step[0]=='p'){
            pon(step);
        }
        else if(step[0]=='c'){
            chi(step);
        }
        output();
    }
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    cin.get();
    while(t--){
        Card.clear();
        chi_and_pon.clear();
        solve();
    }
}