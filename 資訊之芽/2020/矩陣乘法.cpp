#include<bits/stdc++.h>
using namespace std;

const long long MOD=(1e8+7);

int main(){
    long long *A,*B,C,D;
    int i,j,k,rowA,colA,rowB,colB;

    cin >> rowA >> colA;
    A=new long long[rowA*colA];
    for( i=0 ; i<rowA ; i++ ){
        for( j=0 ; j<colA ; j++ ){
            cin >> *(A+(i*colA+j));
            *(A+(i*colA+j))%=MOD;
        }
    }
    cin >> rowB >> colB;
    B=new long long[rowB*colB];
    for( i=0 ; i<rowB ; i++ ){
        for( j=0 ; j<colB ; j++ ){
            cin >> *(B+(i*colB+j));
            *(B+(i*colB+j))%=MOD;
        }
    }
    if( colA==rowB ){
        for( i=0 ; i<rowA ; i++ ){
            for( j=0 ; j<colB ;j++ ){
                C=0;
                for( k=0 ; k<colA ; k++ ){
                      D=(*(A+i*colA+k) * *(B+k*colB+j))%MOD;
                      if( D<0 )D+=MOD; //point
                      C=(C+D)%MOD;
                }
                cout << C << " ";
            }
            cout << "\n";
        }
    }
    else if( colB==rowA ){
        cout << "incommutable!";
    }
    else{
        cout << "unmultipliable!";
    }
    delete B;
    delete A;
}
