#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int times;
	int dp[40001];
	cin>>times;
	cin.ignore();
	while(times--){
		string s;
		stringstream ss;
		memset(dp,0,sizeof(dp));
		getline(cin,s);
		ss << s;
		int num;
		vector<int> v;
		int sum=0;
		while(ss >> num){
			v.push_back(num);
			sum += num;
		}
		sort(v.begin(),v.end());
		int w=sum/2;
		for(int i=0;i<v.size();i++){
			for(int j=w;j>=v[i];j--){
				dp[j]=max(dp[j],dp[j-v[i]]+v[i]);
			}
		}
		if(sum%2)cout<<"NO"<<endl;
		else{
			if(dp[w]==w)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}	
 	}	
	return 0;
}