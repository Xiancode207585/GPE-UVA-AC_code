#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int maxn=101;
int m,n;
char a[maxn][maxn];
void BFS(int r,int c){
	int r1,c1;
	int dx[]={-1,-1,-1,0,0,1,1,1};
	int dy[]={-1,0,1,-1,1,-1,0,1};
	for(int i=0;i<8;i++){
		r1=r+dx[i];
		c1=c+dy[i];
		if(r1>=0 && r1<m && c1>=0 && c1<n && a[r1][c1]=='@'){
			a[r1][c1]='*';
			BFS(r1,c1);
		}
	}
}
signed main(){
	XiancodeAC
	string s;
	while(cin>>m>>n){
		if(m==0 && n==0)break;
		memset(a,'\0',sizeof(a));
		for(int i=0;i<m;i++){
			cin>>s;
			for(int j=0;j<n;j++){
				a[i][j]=s[j];
			}
		}
		int ans=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]=='@'){
					ans++;
					BFS(i,j);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}