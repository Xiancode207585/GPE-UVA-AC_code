#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int sum=0;
	int arr[110];
	arr[0]=0;
	for(int i=1;i<=105;i++){
		int tsum=1;
		for(int j=1;j<=i;j++){
			tsum=(tsum*i)%10;
		}
		sum=(sum+tsum)%10;
		arr[i]=sum;
	}
	string s;
	while(cin>>s&&s!="0"){
		int ans;
		int n=s.size();
		if(n==1){
			ans=s[0]-'0';
		}
		else{
			ans=(s[n-2]-'0')*10+(s[n-1]-'0');
		}
		cout<<arr[ans]<<endl;
	}
	return 0;
}