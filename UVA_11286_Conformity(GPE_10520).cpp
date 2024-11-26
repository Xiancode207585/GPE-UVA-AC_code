#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int n;
	while(cin>>n&&n){
		int a[5];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			for(int j=0;j<5;j++){
				cin>>a[j];
			}
			sort(a,a+5);
			int course=0;
			for(int j=0;j<5;j++){
				course*=1000;
				course+=a[j];
			}
			mp[course]++;
		}
		int mx=0;
		for(auto i:mp){
			mx=max(mx,i.second);
		}
		int ans=0;
		for(auto i:mp){
			if(i.second==mx)ans+=mx;
		}
		cout<<ans<<endl;
	}
	return 0;
}