#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int R,C,M,mk[10];
    int A[10][10],B[10][10];
    while(cin >> R >> C >> M){
        for(int j=0;j<R;j++){
            for(int i=0;i<C;i++){
                cin >> A[j][i];
            }
        }
        for(int i=0;i<M;i++){
            cin >> mk[i];
        }
        for(int k=M-1;k>=0;k--){
            if(mk[k]==0){
                for(int j=C-1;j>=0;j--){
                    for(int i=0;i<R;i++){
                        B[(C-1)-j][i]=A[i][j];
                    }
                }
                for(int j=0;j<C;j++){
                    for(int i=0;i<R;i++){
                        A[j][i]=B[j][i];
                    }
                }
                swap(R,C);
            }else{
                for(int j=R-1;j>=0;j--){
                    for(int i=0;i<C;i++){
                        B[(R-1)-j][i]=A[j][i];
                    }
                }
                for(int j=0;j<R;j++){
                    for(int i=0;i<C;i++){
                        A[j][i]=B[j][i];
                    }
                }
            }
        }
        cout << R << ' '<< C << '\n';
        for(int j=0;j<R;j++){
                cout << A[j][0];
            for(int i=1;i<C;i++){
                cout << ' ' << A[j][i] ;
            }
                cout << '\n';
        }
    }
}
