#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int n;
	while(cin>>n){
		int ans1=floor(1.5*n);
		cout<<ans1<<endl;
		int ans=n;
		while(n>=3){
			ans+=n/3;
			n=n/3+n%3;
		}
		ans+=(n==2);
		//cout<<ans<<endl;
	}
	return 0;
}