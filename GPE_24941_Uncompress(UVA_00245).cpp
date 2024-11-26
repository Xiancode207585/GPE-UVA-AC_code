#include<bits/stdc++.h>
using namespace std;
#define int long long
#define XiancodeAC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int maxn=1e6+6;
signed main(){
	XiancodeAC
	string s;
	vector<string> v;
	while(getline(cin,s)&&s!="0"){
		s+="\n";
		string temp="";
		int num=0;
		for(int i=0;i<s.size();i++){
			if(isalpha(s[i])){
				temp+=s[i];
			}
			else if(isdigit(s[i])){
				num*=10;
				num+=(s[i]-'0');
			}
			else{
				if(num){
					auto it=v.end()-num;
					auto s=*it;
					cout<<*it;
					v.erase(it);
					v.push_back(s);
					num=0;
				}
				vector<string>::iterator it=find(v.begin(),v.end(),temp);
				if(temp!=""&&it==v.end()){
					v.push_back(temp);
				}
				cout<<temp<<s[i];
				temp="";
			}
		}
	}
	return 0;
}