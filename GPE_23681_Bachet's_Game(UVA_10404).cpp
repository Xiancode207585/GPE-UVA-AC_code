#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int stones,amount,steps[10];
	bool stanWin[1000001];
	while(cin>>stones>>amount){
		memset(stanWin,false,sizeof(stanWin));
		for(int i=0;i<amount;i++){
			cin>>steps[i];
		}
		sort(steps,steps+amount);
		for(int i=1;i<=stones;i++){
			for(int j=0;j<amount&&steps[j]<=i;j++){
				stanWin[i]+=!stanWin[i-steps[j]];
			}
		}
		cout<<(stanWin[stones]?"Stan wins\n":"Ollie wins\n");
	}
	return 0;
}