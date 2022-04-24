#include <iostream>
#include <iomanip>
#define N 3
using namespace std;
int main() {
	int n[N];
	int i,ans=0;
	int ans3=1;
	int Max=0,Low;
	double ans2=0;
	for(i=0;i<N;i++){
        cin >> n[i];
	}
	for(i=0;i<N;i++){
        ans=ans+n[i];
	}
	for(i=0;i<N;i++){
        ans2=ans2+n[i];
	}
	ans2=ans2/N;
	for(i=0;i<N;i++){
        ans3=ans3*n[i];
	}
	for(i=0;i<N;i++){
        if(Max<n[i])
            Max=n[i];
	}
	Low=n[0];
	for(i=0;i<N;i++){
        if(Low > n[i]){
            Low=n[i];
        }
	}

	cout << "sum is " << ans << endl;
	cout << "average is " << setiosflags(ios::fixed)<<   setprecision(2) << ans2 << endl;
	cout << "product is " << ans3 << endl;
	cout << "smallest is " << Low << endl;
	cout << "largest is " << Max << endl;
}
