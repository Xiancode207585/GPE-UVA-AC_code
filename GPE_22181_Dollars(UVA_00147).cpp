#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int maxn=1e6+6;
int a[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
int dp[maxn];
signed main(){
	XiancodeAC
	int n=11;
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=a[i];j<maxn;j++){
			dp[j]+=dp[j-a[i]];
		}
	}
	int x,y;
	char c;
	while(true){
		cin>>x>>c>>y;
		if(x==0&&y==0)break;
		cout<<setw(3)<<x<<'.'<<setw(2)<<setfill('0')<<y<<setw(17)<<setfill(' ')<<dp[(100*x+y)]<<endl;
	}
	return 0;
}