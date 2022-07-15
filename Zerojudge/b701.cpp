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
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<20;

int a[1000][1000];
int u[1000][1000];


int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};



void solve(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> a[i][j];
	queue<pair<int,int>> q;
	
	int minW,minN,maxE,maxS,A;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1 && u[i][j]==0){
				
				minW=1000;
				minN=1000;
				maxE=-1;
				maxS=-1;
				A=0;
				q.push({i,j});
				A++;
				minW = min(j,minW);
				minN = min(i,minN);
				maxE = max(j,maxE);
				maxS = max(i,maxS);
				u[i][j]=1;
				while(q.size()>0){
					pair<int,int> tmp = q.front();
					q.pop();
					for(int k=0;k<4;k++){
						int nextx = tmp.first+dx[k];
						int nexty = tmp.second+dy[k];
						if(nextx <0 || nextx>n || nexty <0 || nexty>m)continue;
						if(u[nextx][nexty]==1)continue;
						if(a[nextx][nexty]!=1)continue;
						q.push({nextx,nexty});
						A++;
						minW = min(nexty,minW);
						minN = min(nextx,minN);
						maxE = max(nexty,maxE);
						maxS = max(nextx,maxS);
						u[nextx][nexty]=1;
					}
				}
				cout << minW << " " << minN << " " << maxE << " " << maxS << " " << A << '\n';
			}
		}	
	}
}


signed main(){
    IOS
    solve();    
}

