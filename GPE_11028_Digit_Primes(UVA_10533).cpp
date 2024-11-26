#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAXN=1000006;
bool tb[MAXN];
vector<int> v;
signed main(){
	XiancodeAC
	tb[2]=1;
	//v.push_back(2);
	for(int i=3;i<MAXN;i++){
		int ct=2,flag=1;
		for(int j=2;j*j<=i;j++){
			int k=i/j;
			if(k*j==i){
				flag=0;
				break;
			}
		}
		if(flag){
			tb[i]=1;
		}
		else continue;
	}
	for(int i=2;i<MAXN;i++)
	{
		int ck=0,c=i;
		if(tb[i])
		{
			while(c!=0){
				ck+=c%10;
				c/=10;
			}
			if(tb[ck])v.push_back(i);
		}
	}
	//for(int i=1;i<40;i++)if(tb[i])cout<<i<<endl;
	int n,t1,t2;
	cin>>n;
	//for(int i:v)cout<<i<<endl;
	while(n--){
		cin>>t1>>t2;
		auto l1=lower_bound(v.begin(),v.end(),t1);
		auto l2=upper_bound(v.begin(),v.end(),t2);
		cout<<l2-l1<<endl;
	}
	return 0;
}