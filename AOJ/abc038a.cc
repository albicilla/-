#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string s;
	cin>>s;
	 // if(s[s.size()-1]=='T'){
	 // 	cout<<"YES"<<endl;
	 // }else{
	 // 	cout<<"NO"<<endl;
	 // }
	 for(int i=0;i<s.size();i++){
	 	cout<<"s["<<i<<"]"<<s[i]<<endl;
	 }
	return 0;
}