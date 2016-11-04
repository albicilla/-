#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int ans;
int main(){
	int a,b;
	int s[10100],t[10100];
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
	cin>>b;
	for(int j=0;j<b;j++){
		cin>>t[j];
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(s[i]==t[j])ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}