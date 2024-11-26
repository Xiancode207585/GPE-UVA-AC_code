#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int maxn=1e6+6;
int p[maxn];
vector<int> v;
signed main(){
	XiancodeAC
	for(int i=2;i<maxn;i++){
		if(p[i]==0){
			for(int j=i+i;j<maxn;j+=i){
				p[j]=1;
			}
			v.push_back(i);
		}
	}
	int n;
	while(cin>>n){
		if(n==0)break;
		int cnt=0;
		for(int i=0;v[i]<=n;i++){
			int sum=0;
			for(int j=i;sum<n;j++){
				sum+=v[j];
				if(sum==n){
					cnt++;
					break;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}