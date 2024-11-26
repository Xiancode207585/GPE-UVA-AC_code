#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int convert(string ter){
	int sum=0;
	int base=1;
	for(int i=ter.size()-1;i>=0;i--){
		sum+=(ter[i]-'0')*base;
		base*=2;
	}
	return sum;
}
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	int n;
	cin>>n;
	int sv=n;
	while(n--){
		string s1,s2;
		cin>>s1>>s2;
		int num1=convert(s1);
		int num2=convert(s2);
		if(gcd(num1,num2)==1)cout<<"Pair #"<<sv-n<<": Love is not all you need!"<<endl;
		else cout<<"Pair #"<<sv-n<<": All you need is love!"<<endl;
	}
	return 0;
}