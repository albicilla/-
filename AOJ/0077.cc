#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		string t;
		for(int i=0;i<(int)s.size();i++){
			if(s[i]=='@'){
				i++;
				int p=s[i]-'0';
				i++;
				for(int j=0;j<p;j++){
					t+=s[i];
				}
			}
			else t+=s[i];
		}
		cout<<t<<endl;
	}
	return 0;
}