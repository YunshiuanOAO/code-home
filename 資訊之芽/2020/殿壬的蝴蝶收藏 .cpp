#include<bits/stdc++.h>
using namespace std;
unsigned char *book1;
unsigned char *book2;

int main(){
    int i,j,N,M,t,k;

    cin >> N >> M;

    book1=new unsigned char[500000];
    book2=new unsigned char[500000];
    memset(book1,0,500000);
    memset(book2,0,500000);
    for(i=0;i<N;i++){
        cin >> k;
        book1[k]++;
    }
    for(i=0;i<M;i++){
        cin >> t >> k;
        if( t==1 ){
            book2[k]++;
        }
        else{
            if( book2[k] )book2[k]--;
            else {
                if( book1[k] ){ book1[k]--; N--; }
            }
        }
    }

    cout << N << endl;
    for(i=0;i<500000;i++){
        for(j=0 ; j<book1[i] ; j++ )cout << i << " ";
    }
    delete book1;
    delete book2;
}
