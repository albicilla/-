#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int ans;
int main(){
	string s,t;
	cin>>s>>t;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<t.size();j++){
			if(s[i]==t[j])ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}