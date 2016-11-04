#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	string s;
	cin>>s;
	int i=s.size();
	if(s[i-1]=='T')
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}