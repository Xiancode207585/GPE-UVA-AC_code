#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int s,d;
	while(cin>>s>>d){
		while(d>0){
			d-=s;
			s++;
		}
		s--;
		cout<<s<<endl;
	}
	return 0;
}