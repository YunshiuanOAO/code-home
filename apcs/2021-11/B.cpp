#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cctype>
#include<deque>
#include<string>
#include<stack>
#include<string.h>

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<10;
int a[SIZE][SIZE];
int n,m;

void up(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpx>=0){
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpx--;
	}
	if(find){
		for(int i=x;i>tmpx;i--){
			a[i][y]++;
		}
	}
}

void down(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpx<n){
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpx++;
	}
	if(find){
		for(int i=x;i<tmpx;i++){
			a[i][y]++;
		}
	}
}
void right(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpy<m){
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpy++;
	}
	if(find){
		for(int i=y;i<tmpy;i++){
			a[x][i]++;
		}
	}
}
void left(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpy>=0){
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpy--;
	}
	if(find){
		for(int i=y;i>tmpy;i--){
			a[x][i]++;
		}
	}
}

void d_up(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpx>=0){
		if(a[tmpx][tmpy]==0)return;
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpx--;
	}
	if(find){
		for(int i=x;i>tmpx;i--){
			a[i][y]--;
		}
	}
}

void d_down(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpx<n){
		if(a[tmpx][tmpy]==0)return;
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpx++;
	}
	if(find){
		for(int i=x;i<tmpx;i++){
			a[i][y]--;
		}
	}
}
void d_right(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;
	while(tmpy<m){
		if(a[tmpx][tmpy]==0)return;
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpy++;
	}
	if(find){
		for(int i=y;i<tmpy;i++){
			a[x][i]--;
		}
	}
}
void d_left(int x,int y){
	bool find = 0;
	int tmpx=x,tmpy=y;

	while(tmpy>=0){
		if(a[tmpx][tmpy]==0)return;
		if(a[tmpx][tmpy]==-1){
			find = 1;
			break;
		}
		tmpy--;
	}
	if(find){
		for(int i=y;i>tmpy;i--){
			a[x][i]--;
		}
	}
}

void solve(){
	int h,mx=-1,ans;
	cin >> n >> m >> h;
	while(h--){
		int r,c,t;
		
		cin >> r >> c >> t;
		d_up(r-1,c);
		d_down(r+1,c);
		d_right(r,c+1);
		d_left(r,c-1);
		
		if(t==0){
			a[r][c] = -1;
			up(r-1,c);
			down(r+1,c);
			right(r,c+1);
			left(r,c-1);
		}else{
			a[r][c]=0;
		}
		ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]!=0)ans++;
			}
		}
		mx = max(ans,mx);
	}
	cout << mx << '\n';
	cout << ans << '\n';
}


signed main(){
    IOS
    solve();
}

