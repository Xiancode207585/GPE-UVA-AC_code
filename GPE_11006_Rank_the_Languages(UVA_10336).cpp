#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=500;
char a[maxn][maxn];
int h,w,remain;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int cnt[26];
void bfs(int x,int y){
	queue<pair<int,int>> q;
	q.push({x,y});
	char target=a[x][y];
	a[x][y]='0';
	while(!q.empty()){
		pair<int,int>  now=q.front();
		q.pop();
		x=now.first;
		y=now.second;
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&nx<h&&ny>=0&&ny<w&&a[nx][ny]==target){
				q.push({nx,ny});
				a[nx][ny]='0';
			}
		}
	}
	cnt[target-'a']++;
}
signed main(){
	XiancodeAC
	int t;
	string s;
	cin>>t;
	for(int ca=1;ca<=t;ca++){
		cin>>h>>w;
		for(int i=0;i<h;i++){
			cin>>s;
			for(int j=0;j<w;j++){
				a[i][j]=s[j];
				
			}
		}
		for(int i=0;i<26;i++)cnt[i]=0;
		while(true){
			int x=0,y=0;
			bool flag=false;
			for(int i=0;i<h;i++){
				for(int j=0;j<w;j++){
					if(a[i][j]!='0'){
						x=i;
						y=j;
						flag=true;
						break;
					}
				}
				if(flag)break;
			}
			if(flag)bfs(x,y);
			else break;
		}
		int mx=0;
		for(int i=0;i<26;i++){
			mx=max(mx,cnt[i]);
		}
		cout<<"World #"<<ca<<endl;
		while(mx){
			for(int i=0;i<26;i++){
				if(cnt[i]==mx){
					cout<<(char)('a'+i)<<": "<<cnt[i]<<endl;
				}
			}
			mx--;
		}
	}
	return 0;
}