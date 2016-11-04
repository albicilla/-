#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int alpha[30];

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<27;j++){
			if((s[i]-'a')==j)alpha[j]++;
		}
	}
	for(int j=0;j<27;j++){
		if(alpha[j]%2!=0){
			cout<<"No"<<endl;
			return 0;
		}

	}
	cout<<"Yes"<<endl;
	return 0;
}