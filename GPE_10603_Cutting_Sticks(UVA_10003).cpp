#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int dp[55][55];
int a[55];
int solve(int x,int y){
	if(dp[x][y]!=-1)return dp[x][y];
	if(x+1==y)return dp[x][y]=0;
	int cost=1e18;
	for(int i=x+1;i<y;i++){
		cost=min(cost,solve(x,i)+solve(i,y));
	}
	return dp[x][y]=cost+a[y]-a[x];
}
signed main(){
	XiancodeAC
	int len;
	while(cin>>len){
		if(len==0)break;
		int n;
		memset(a,0,sizeof(a));
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		a[n+1]=len;
		cout<<"The minimum cutting is "<<solve(0,n+1)<<'.'<<endl;
	}
	
	return 0;
}